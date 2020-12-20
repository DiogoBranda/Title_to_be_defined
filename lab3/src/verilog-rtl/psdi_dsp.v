module psdi_dsp(
  input  clock,
	input  reset,
	input [7:0] switches,
	input data_en,
  output [6:0] RAM_coefs_addr,
	input  [17:0] RAM_coefs_dataout,
  input [17:0] right_in,
	input [17:0] left_in,
	output signed [17:0] right_out,
	output signed [17:0] left_out
);

wire [17:0] right_out_lowpass;

lowpass lowpass_right(
  .clock(clock), // Master clock
  .reset(reset), // master reset, synchronous, active high
  .datain(right_in), // input data
  .endata(data_en), // data clock enable
  .dataout(right_out), // output data
  // Interface to the coefficient memory:
  .coefaddress(RAM_coefs_addr), // 7-bit address
  .coefdata(RAM_coefs_dataout) // 18-bit data
 );

wire [17:0] right_in_down;
assign right_in_down = switches[0] ? 	right_in : right_out_lowpass;	 

//-------------------------------------------------------------------------------
// Audio samples are available in the positive clock edge when data_en is 1
// 
// A synchronous process to handle the audio stream should be as:
always @(posedge clock)
  begin
    if ( reset ) begin

    end

    else if ( data_en ) begin
        
    end

  end
//-------------------------------------------------------------------------------

endmodule
