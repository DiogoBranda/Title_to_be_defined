%%-------------------------------------------------------------------------
%% PSDi 2020/2021 - reference functional model
% run this script in ./matlab directory
% input and output audio files are in ./audio
% datafiles generated for simulation will be placed into ./simdata
%
% 
clear all

% Identify the tool running this script, Matlab or Octave. 
toolname = 'OCTAVE';
toolversion = ver();
for i=1:length(toolversion)
  if strcmp( upper( toolversion(i).Name ), 'MATLAB' ) 
    toolname = 'MATLAB';
	break;
  end
end

% If running Octave:
if strcmp(toolname, 'OCTAVE' )
  pkg load signal
end
  


samplefilename = '../audio/VIOLIN.wav';
%samplefilename = '../audio/Smooth_FM_AUDIO.wav';
%samplefilename = '../audio/chirp-400-10k.wav';

outputfilename = '../audio/out.wav';

FIRfilename = '../simdata/FIR.hex';

% Set to N to print the first N intermediate results
% (see the end of the program)
PRINT_DEBUG = 5;

% The hex files with the input stereo audio signal to be loaded by the testbench:
inputhexfile_left   = '../simdata/audioin_left.hex';
inputhexfile_right  = '../simdata/audioin_right.hex';

% The hex files with the golden output audio signal for implementing the self-verification
outputlefthexfile   = '../simdata/output_left_golden.hex';
outputrighthexfile  = '../simdata/output_right_golden.hex';

% duration in seconds for processing the input signal
% a few seconds is ok for listening the audio file created
% more than 1 second may be too much for running a post-route simulation
duration = 5;

% Number of samples to output to the input hex files and the golden output file
% to be read by the testbench:
NhexSamplesForTb = 4800;  %% Fs = 48k, 4800 samples is 0.1 seconds

%-------------------------------------------------------------------------
%% Design parameters
% Note that the input sampling frequency is fixed to 48 kHz
% and the number of bits is also fixed to 18 bits
% The input audio file will be resampled to 48 kHz and scaled to 18 bits

CutoffFreq = 6000; % Cutoff frequency of the low-pass filter
LPFilterOrder = 64; % DON'T TOUCH THIS
DownSampleFactor = 4; % 48 kHz -> 12 kHz
Nbitsout = 16;   % Number of bits per sample after the resample block
interpolorder = 1; % Interpolation order. Octave only allows 1st-order interpolation (linear)

% Add / remove blocks:
addLPfilter     = 1;
addDownsample   = 1;
addRequantize   = 1;
addinterpol     = 1;

% Number of samples to plot, adjust to the audio input file
Nsamples = 2000;

%%-----------------------------------------------------------------
%% ************ DO NOT CHANGE ANYTHING BELOW THIS LINE ************
%-----------------------------------------------------------------
Fs = 48000;      % Input audio sampling frequency:
Nbitsin = 18;    % Number of bits of input signal
UpSampleFactor = DownSampleFactor; % DON'T TOUCH THIS !

%% Load audio sample
fprintf('---------------------------------------------------\n');
fprintf('Loading audio file ''%s''\n', samplefilename );
[xin , Fsin] = audioread( samplefilename );

% Use only a subpart of the input signal:
if ( duration * Fsin < length( xin ) )
  xin = xin(1:duration*Fsin,:);
end

sizex = size(xin);
if ( sizex(2) == 1 ) % Mono, convert to stereo
    xin(:,2) = xin(:,1);
end
nsamplesin = length( xin );

fprintf('Read %d samples (%4.1f secs), %1d channels, input sampling frequency is %d Hz\n', ...
                                        length(xin), length(xin)/ Fsin, sizex(2), Fsin );
fprintf('   Max amplitude is %4.1f%% of the 18 bit dynamic range\n', ...
                                        (100 * max ( max( abs( xin ) ) ) ) );

%------------------------------------------------
%% Input audio file may have a sample rate different from 48 kHz.
%  Resample to Fs set to 48 kHz
fprintf('Resampling input file from %1d Hz to %2d Hz...\n', Fsin, Fs);

% Force 1st sample to be zero. This is convenient for the linear
% interpolation process (is this really necessary ?!)
xin(1,:) = 0;
xin(2,:) = 0;

% Input audio stream will be sampled at Fs1 = 48 kHz:
xin48k = resample( xin, Fs, Fsin );

% Quantize to Nbitsin bits:
xin48k = double( round( xin48k * (2^(Nbitsin-1)-1) ) ) / double( ( 2^(Nbitsin-1)-1) );

fprintf('Normalizing input amplitude.\n');
maxx = max( max( abs( xin48k ) ) );
xin48k = xin48k / (maxx*1.05);  %% Reduce amplitude to 95% of max.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Print the hex input files for the left and right channels:
%------------------------------------------------
%% Convert to integer with Nbitsin bits
% these integer data samples vectors will be used 
% to create the input data for the testbench
xin48k_int = int32( xin48k * (2^(Nbitsin-1)-1) );

fprintf('---------------------------------------------------\n');
fprintf('Creating left input hex file %s...\n', inputhexfile_left );
fpleft = fopen(inputhexfile_left,'w+');
NinputSamples = min( length( xin48k_int ), NhexSamplesForTb );
for i=1:NinputSamples
    if ( xin48k_int(i,1) >=0 )
      fprintf(fpleft, '%05X\n', xin48k_int(i,1) );
    else
      fprintf(fpleft, '%05X\n', int32( 2^Nbitsin + xin48k_int(i,1) ) );    
    end
end
fclose( fpleft );
fprintf('Wrote %d samples.\n', NinputSamples );

% print hex file for right channel:
fprintf('Creating right input hex file %s...\n', inputhexfile_right );
fpright = fopen(inputhexfile_right ,'w+');
for i=1:NinputSamples
    if ( xin48k_int(i,2) >=0 )
      fprintf(fpright, '%05X\n', xin48k_int(i,2) );
    else
      fprintf(fpright, '%05X\n', int32( 2^Nbitsin + xin48k_int(i,2) ) );       
    end
end
fclose( fpright );
fprintf('Wrote %d samples.\n', NinputSamples );

fprintf('---------------------------------------------------\n');


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Low-pass filter:
if addLPfilter == 1

    LPcoefs = fir1( LPFilterOrder, CutoffFreq/(Fs/2), 'low');
    
    yout = zeros( length(xin48k)+LPFilterOrder, 2 );  
    yout(:,1) = conv( xin48k(:,1), LPcoefs );  
    yout(:,2) = conv( xin48k(:,2), LPcoefs );  
    
	% Quantize the filter coefficients to 18 bits, 12 fractional bits:
    LPcoefs_18b = int32(LPcoefs * 2^12 );
    LPcoefs_q = double( double( LPcoefs_18b ) / double( 2^12 ) );

    figure(10);
    freqz( LPcoefs );
    hold on;
    freqz( LPcoefs_q );
    hold off;
    title('FIR frequency response - double and fixed point with 12 fractional bits');

    
    %------------------------------------------------
    %% Create a the hex file to initialize the RAM with the filter coefficients:
    fprintf('Creating hex data file with the filter coefficients %s...\n', FIRfilename );
    fpFIR = fopen(FIRfilename,'w+');
    for i=1:length( LPcoefs_18b )
        if ( LPcoefs_18b(i) >=0 )
          fprintf(fpFIR, '%05X\n',  LPcoefs_18b(i) );
        else
          fprintf(fpFIR, '%05X\n', int32( 2^18 +  LPcoefs_18b(i) ) );    
        end
    end
    fclose( fpFIR );
    fprintf('Wrote %d coefficients.\n', length( LPcoefs_18b ) );
    
else % Disable LP filter:
  yout = xin48k;
  LPfilterOrder = 0;
end
 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Downsample
if addDownsample == 1
  % Downsampling:
  youtds = zeros( length(yout), 2 );   
  Sk1 = yout(1,1);
  Sk2 = yout(1,2);
  for i=1:length(yout) - DownSampleFactor
     youtds( i,1 ) = Sk1;
     youtds( i,2 ) = Sk2;
     if ( mod(i,DownSampleFactor) == 0 )
         Sk1 = yout( i+1,1 );
         Sk2 = yout( i+1,2 );
     end
  end
else
    youtds = yout;
end
 
 figure(1);

 plot( yout(1:Nsamples, 1) , '.-' );
 hold on;
 plot( youtds(1:Nsamples, 1) , '.-' );
 grid on;
 title('Original and Downsampled');
 xlabel('Samples');
 ylabel('Sample value, normalized to [+1, -1]' );
 hold off;
 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Requantizing to Nbitsout bits/sample:
 if addRequantize == 1
     youtrq = double( round( youtds * (2^(Nbitsout-1)-1) ) ) / ( 2^(Nbitsout-1)-1);
 else
     youtrq = youtds;
 end
 
 figure(2);
 plot( youtds(1:Nsamples, 1) , '.-' );
 hold on;
 plot( youtrq(1:Nsamples, 1) , '.-' );
 hold off;
 grid on;
 title('Downsampled and requantized');
 xlabel('Samples');
 ylabel('Sample value, normalized to [+1, -1]' );
 
 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Interpolation:
% Design FIR filter
 if addinterpol == 1
     for i=1:length(youtrq) - DownSampleFactor
       youtrq( i,1 ) = 0;
       youtrq( i,2 ) = 0;
       if ( mod(i,UpSampleFactor) == 0 )
           youtrq( i,1 ) = youtrq( i+1,1 );
           youtrq( i,2 ) = youtrq( i+1,2 );
       end
     end  
   
   % If running Matlab, use function intfilt to calculate the 
   %   interpolation FIR filter for any interpolation order
   % If running Octave, function intfilt is not available and this only 
   % allows linear interpolation:
   
   % If running Matlab:
   if strcmp(toolname, 'MATLAB' )
     binter = intfilt(UpSampleFactor, interpolorder, 'Lagrange');
   else %% Running Octave
     if ( interpolorder > 1 )
	     fprintf('Running Octave, interpolation order set to 1 (linear interpolation)\n');
       interpolorder = 1;
	   end
	   binter_0 = linspace(0, 1, UpSampleFactor + 1 );
	   binter_1 = linspace(1, 0, UpSampleFactor + 1 );
	   binter = [ binter_0(2:end) binter_1(2:end-1) ];
   end

   %% Quantize ther interpolation filter coefficients to 16 decimal bits:
   binter = round( binter * 2^16 ) / 2^16;
   
   fprintf('Length of interpolation filter: %d\n', length( binter ) );
   youtip(:,1) = conv( youtrq(:,1), binter );
   youtip(:,2) = conv( youtrq(:,2), binter );
 else
     youtip = youtrq;
 end
 
figure( 4 );
plot( xin48k(1 : Nsamples , 1 ), 'o-');
hold on;
plot( youtip( LPFilterOrder/2 + int32( (length( binter )-1) / 2 ) : ...
       Nsamples + LPFilterOrder/2 + int32( (length( binter )-1) / 2 ) , 1 ), 'o-');
plot( youtds(LPFilterOrder/2 : Nsamples+LPFilterOrder/2 , 1 ), 'o-');
grid on;
title('Original, downsampled and interpolated (final output)');
xlabel('Samples');
ylabel('Sample value, normalized to [+1, -1]' );
hold off;
 
 
 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Output the golden output data:
fpoutleft  = fopen( outputlefthexfile, 'w+');
fpoutright = fopen( outputrighthexfile, 'w+');

% The final output is always 18-bit
Nbitsout_final = 18;

% write to the golden hex files the same number of input samples:
Noutputsamples = NinputSamples;

% Convert to integer, 18 bits:
youtip_int = int64( youtip * ( 2^17-1) );

fprintf('---------------------------------------------------\n');
fprintf('Writing %1d samples, signed %2d bits, to the golden output hex files %s, %s...\n', ...
                 Noutputsamples, Nbitsout_final, outputlefthexfile, outputrighthexfile );
for i=1:Noutputsamples
    if youtip_int(i,1) < 0
        fprintf( fpoutright, '%05x\n', 2^Nbitsout_final + int64( youtip_int(i,1) ) );
    else
        fprintf( fpoutright, '%05x\n', int64( youtip_int(i,1) ) );
    end
    
    if youtip_int(i,2) < 0
        fprintf( fpoutleft, '%05x\n', 2^Nbitsout_final + int64( youtip_int(i,2) ) );
    else
        fprintf( fpoutleft, '%05x\n', int64( youtip_int(i,2) ) );
    end
    
    
    if ( mod(i,48000 ) == 0 )
        fprintf('%d (%3d%%)...\n', i, int32(i*100/Noutputsamples) );
    end
end

fclose( fpoutright );
fclose( fpoutleft );
 
 
%% Output audio file

audiowrite( outputfilename, youtip, 48000 );
 
fprintf('Output: %d bits/sample, Fs = %d Hz, bitrate = %d bits/s\n', ...
               Nbitsout, Fs/DownSampleFactor, Nbitsout * Fs/DownSampleFactor );
           
           