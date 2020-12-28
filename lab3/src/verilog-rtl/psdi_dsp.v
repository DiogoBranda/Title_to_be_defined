/*
	Authors: Diogo Silva(up201809213) & Joao Pereira(up201909554)
	University: FEUP - MIEEC - PSDi 2020/21
	
	Brief Description:
	
	AudioIn ->Lowpass Fir -> DownSample -> Requantize -> Interpol -> AudioOut
	
	This module implements in cascate the follwing modules: 
	Lowpass Fir -> DownSample -> Requantize -> Interpol
	The output of the modules is wired to a mux that can turn on or off the modules.
	In case of a module being off it jumps to the next one, for example:
	If DownSample off then : Lowpass Fir -> Requantize -> Interpol
	If DownSample & Interpol off then : Lowpass Fir -> Requantize
	
	Note that:
	To test individual modules or to test groups of modules may be necessary 
	to ajuste N_SAMPLES_LATENCY value in s6base_tb.v file for correct operation
	
	Additional changes:
	Add inputs N & M to allow either hardcode parameter changes or received it from uart

*/
module psdi_dsp(
   input  clock,
	input  reset,
	input [7:0] switches,
	input data_en,
   output [6:0] RAM_coefs_addr,
	input  [17:0] RAM_coefs_dataout,
   input [17:0] right_in,
	input [17:0] left_in,
	input [4:0] N_r,
	input [4:0] M_r,
	input	[4:0] N_l,
	input [4:0] M_l,
	output signed [17:0] right_out,
	output signed [17:0] left_out
);



wire [17:0] right_out_lowpass;


lowpass lowpass_right(
  .clock(clock), // Master clock
  .reset(reset), // master reset, synchronous, active high
  .datain(right_in), // input data
  .endata(data_en), // data clock enable
  .dataout(right_out_lowpass), // output data
  // Interface to the coefficient memory:
  .coefaddress(RAM_coefs_addr), // 7-bit address
  .coefdata(RAM_coefs_dataout) // 18-bit data
 );

wire [17:0] right_in_down; 

assign right_in_down = switches[0] ? 	right_in : right_out_lowpass;	// Set the input of downsample [right side]

//assign  right_in_down = right_out_lowpass; // Lowpass ON
//assign  right_out = right_out_lowpass;  // Lowpass ONLY

wire [17:0] right_out_sample;
wire  N_clock_r;
downsample downsample_r(
    .clock(clock), // Master clock
    .reset(reset), // master reset, synchronous, active high
    .Nfreq(N_r), // sampling rate divide factor
    .datain(right_in_down), // input data
    .endatain(data_en), // in clock enable, Fs=48kHz
    .dataout(right_out_sample), // output data
    .endataout(N_clock_r) // out clock enable, Fs = 48kHz/Nfreq
 );

wire [17:0] right_data_sample;
wire N_clock_r_s;
assign right_data_sample = switches[1] ? 	right_in_down : right_out_sample; // Set the input of requantize [right]
assign N_clock_r_s = switches[1] ? 	 data_en : N_clock_r; // Case Downsample OFF use enable clock of 48kHz
//assign N_clock_r_s = N_clock_r;
//assign right_data_sample = right_out_sample; // Downsample ON
//assign  right_out = right_out_sample; // Downsample Final output module


wire [4:0] aux_r;			//Auxiliar variable to reduce the number of bits of the input samples
assign aux_r=5'd18-M_r; // Does 18-M, in module requantize the input is (18-M)

wire [17:0] out_requantize_r;
requantize requantize_r(
    .clock(clock), // Master clock
    .reset(reset), // master reset, synchronous, active high
    .Nquant(aux_r), // No. of output quantization bits
    .datain(right_data_sample), // input data
    .endatain(N_clock_r_s), // input data clock enable
    .dataout(out_requantize_r) // output data
); 
wire [17:0] data_requantize_r;
assign data_requantize_r = switches[2] ? 	right_data_sample : out_requantize_r; // Set the input of interpol [right]
//assign data_requantize_r=out_requantize_r; // Requantize ON
//assign  right_out = out_requantize_r; // Requantize Final output module


wire [17:0] out_inter_r;
interpol interpol_r ( 
            .clock(clock),    // master clock
            .reset(reset),    // master reset, assynchronous, active high
				.endatain(N_clock_r_s), // enable input data, low sampling frequency
				.endataout(data_en),// output data enable, this should be the 48 kHz clock enable
				.Nfreq(N_r), // the interpolationm factor, this is the same as the downsample factor
				.datain(out_requantize_r), // input data
				.dataout( out_inter_r) // output data
          );
			 
assign right_out = switches[3] ?  data_requantize_r : out_inter_r; // Set the final output [right]
//assign right_out = out_inter_r; // interpol ON

/*---------------------------------------------------------------------------------------------
--------------------------------------		Left Side		--------------------------------------
---------------------------------------------------------------------------------------------*/  
  
wire [17:0] left_out_lowpass;


lowpass lowpass_left(
  .clock(clock), // Master clock
  .reset(reset), // master reset, synchronous, active high
  .datain(left_in), // input data
  .endata(data_en), // data clock enable
  .dataout(left_out_lowpass), // output data
  // Interface to the coefficient memory:
  .coefaddress( ), // 7-bit address
  .coefdata(RAM_coefs_dataout) // 18-bit data
 );

wire [17:0] left_in_down;
assign left_in_down = switches[4] ? 	left_in : left_out_lowpass; // Set the input of downsample [left side]	 
//assign  left_in_down = left_out_lowpass; // Lowpass ON
//assign  left_out = left_out_lowpass;  // Lowpass ONLY



wire [17:0] out_sample_l;
wire  N_clock_l;
downsample downsample_l(
    .clock(clock), // Master clock
    .reset(reset), // master reset, synchronous, active high
    .Nfreq(N_l), // sampling rate divide factor
    .datain(left_in_down), // input data
    .endatain(data_en), // in clock enable, Fs=48kHz
    .dataout(out_sample_l), // output data
    .endataout(N_clock_l) // out clock enable, Fs = 48kHz/Nfreq
 );

wire [17:0] data_sample_l;
wire N_clock_l_s ;
assign data_sample_l = switches[5] ? 	left_in_down : out_sample_l; // Set the input of requantize []
assign N_clock_l_s = switches[5] ? 	data_en : N_clock_l;				// Case Downsample OFF use enable clock of 48kH

//assign data_sample_l = out_sample_l; // Downsample ON
//assign  left_out = out_sample_l;     // Downsample Final output module

wire [4:0] aux_l;					//Auxiliar variable to reduce the number of bits of the input samples
assign aux_l=5'd18-M_l;			// Does 18-M, in module requantize the input is (18-M)


wire [17:0] out_requantize_l;
requantize requantize_l(
    .clock(clock), // Master clock
    .reset(reset), // master reset, synchronous, active high
    .Nquant(aux_l), // No. of output quantization bits
    .datain(data_sample_l), // input data
    .endatain(N_clock_l_s), // input data clock enable
    .dataout(out_requantize_l) // output data
); 
wire [17:0] data_requantize_l;
assign data_requantize_l = switches[6] ? 	data_sample_l : out_requantize_l; // Set the input of interpol [left]
//assign data_requantize_l=out_requantize_l; // Requantize ON
//assign  left_out = out_requantize_l; // Requantize Final output module

wire [17:0] out_inter_l;
interpol interpol_l ( 
            .clock(clock),    // master clock
            .reset(reset),    // master reset, assynchronous, active high
				.endatain(N_clock_l_s), // enable input data, low sampling frequency
				.endataout(data_en),// output data enable, this should be the 48 kHz clock enable
				.Nfreq(N_l), // the interpolationm factor, this is the same as the downsample factor
				.datain(out_requantize_l), // input data
				.dataout( out_inter_l) // output data
          );
			 
assign left_out = switches[7] ? 	data_requantize_l : out_inter_l; // Set the final output [left]
//assign left_out = out_inter_l; // interpol ON

endmodule