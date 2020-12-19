/* 
PSD 2020/21
Lab 1 - Design and verification of a sequential non-restoring divider
*/
`timescale 1ns/1ns
`include "downsample.v"

module downsample_tb;
  
parameter CLOCK_PERIOD = 10;

parameter MAX_SIM_TIME = 100_000_000;

  
reg  clock, reset;
reg [3:0] Nfreq; // sampling rate divide factor
reg [17:0] datain; // input data
reg endatain; // in clock enable, Fs=48kHz
wire [17:0] dataout; // output data
wire endataout; // out clock enable, Fs = 48kHz/Nfreq



downsample downsample_1

      ( .clock(clock), // master clock and reset
        .reset(reset), 
        .Nfreq(Nfreq), // set to 1 to start a division
        .datain(datain),   // set to 1 to load output registers
        .endatain(endatain),  // the operands
        .dataout(dataout), 
        .endataout(endataout)  // the results
        ); 
     
        
// Setup initial signals, generate 50% duty-cycle clock:
initial
begin
  clock = 1'b0;
  reset = 1'b0;
  datain = 18'd0;
  endatain = 1'b0;
  forever
    # (CLOCK_PERIOD / 2 ) clock = ~clock;
end

//---------------------------------------------------
// Apply the initial reset for 1.5 clock cycles:
initial
begin
  # 23 // wait 23 ns to misalign the reset pulse with the clock edges:
  reset = 1;
  # (2 * CLOCK_PERIOD )
  reset = 0;
end

// Set simulation time:
initial
begin
  # ( MAX_SIM_TIME )
  $stop;
end


//---------------------------------------------------
// The verifications:
initial
begin
	$display("Teste 1");
	 $dumpfile("downsample_tb.vcd");
    $dumpvars(0,downsample_tb);
  # (10*CLOCK_PERIOD )
	execdivide( 18'h00000, 2 ); // call task
  execdivide( 18'h3FFEA, 2 );
  execdivide( 18'h00181, 2 );
  execdivide( 18'h001FC, 2 );
  execdivide( 18'h0019E, 4 );
  execdivide( 18'h001BD, 4 );
  execdivide( 18'h001B8, 4 );
  execdivide( 18'h001B5, 4 );
  execdivide( 18'h001DD, 2 );
  execdivide( 18'h001C3, 2 );
  execdivide( 18'h001C4, 2 );
 
	$stop;

end

 
// Execute a division:
task execdivide;
input [17:0] datain_tb,n;
integer i;
begin
  Nfreq=n;
  datain = datain_tb;   // Apply operands
  endatain = 1'b1; 
  #(CLOCK_PERIOD);     // Assert start
  endatain = 1'b0;
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD);
  $display("dataout = %h %d", dataout,n);
  

 end  
endtask

endmodule