%%-------------------------------------------------------------------------
%% PSDi 2020/2021 - reference functional model
% run this script in ./matlab directory
% input and output audio files are in ./audio
% datafiles generated for simulation will be placed into ./simdata
%
% 
clear all

% Uncomment the following like to run this script in Octave:
 pkg load signal


samplefilename = '../audio/VIOLIN.wav';
%samplefilename = '../audio/Smooth_FM_AUDIO.wav';
%samplefilename = '../audio/chirp-400-10k.wav';

outputfilename = '../audio/out.wav';

duration = 5;   % duration in seconds for processing the input signal


%-------------------------------------------------------------------------
%% Design parameters
% Note that the input sampling frequency is fixed to 48 kHz
% and the number of bits is also fixed to 18 bits
% The input audio file will be resampled to 48 kHz and scaled to 18 bits

CutoffFreq = 6000; % Cutoff frequency of initial low-pass filter
LPFilterOrder = 64;
DownSampleFactor = 4; % 48 kHz -> 12 kHz
Nbitsout = 8;   % Number of bits per sample after the resample block
interpolorder = 1; % Interpolation order

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
% interpolation process (TBBE)
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
%% Low-pass filter:
if addLPfilter == 1
   d = fir1(64,CutoffFreq);
 
    % figure(3); freqz( d.Coefficients);
    
    yout = zeros( length(xin48k)+64, 2 );  
    yout(:,1) = conv( xin48k(:,1), d );  
    yout(:,2) = conv( xin48k(:,2), d);  
    LPfilterOrder = 64;
 
else 
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
   binter = intfilt(UpSampleFactor, interpolorder,'Lagrange');
   fprintf('Length of interpolation filter: %d\n', length( binter ) );
   youtip(:,1) = conv( youtrq(:,1), binter );
   youtip(:,2) = conv( youtrq(:,2), binter );
 else
     youtip = youtrq;
 end
 
figure( 4 );
plot( xin48k(1 : Nsamples , 1 ), '.-');
hold on;
plot( youtip( LPfilterOrder/2 + int32( (length( binter )-1) / 2 ) : ...
       Nsamples + LPfilterOrder/2 + int32( (length( binter )-1) / 2 ) , 1 ), '.-');
title('Original and interpolated (final output)');
xlabel('Samples');
ylabel('Sample value, normalized to [+1, -1]' );
hold off;
 
 
%% Output audio file

audiowrite( outputfilename, youtip, 48000 );
 
fprintf('Output: %d bits/sample, Fs = %d Hz, bitrate = %d bits/s\n', ...
               Nbitsout, Fs/DownSampleFactor, Nbitsout * Fs/DownSampleFactor );