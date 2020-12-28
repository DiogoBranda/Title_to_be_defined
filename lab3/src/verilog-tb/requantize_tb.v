/* 
PSD 2020/21
Lab 1 - Design and verification of a sequential non-restoring divider
*/
`timescale 1ns/1ns
//`include "requantize.v"

module requantize_tb;
  
parameter CLOCK_PERIOD = 10;

parameter MAX_SIM_TIME = 100_000_000;

  
reg  clock, reset;
reg  endatain;
reg [4:0] Nquant; // No. of output quantization bits
reg  [17:0] datain;
wire [17:0] dataout;


requantize requantize_1

      ( .clock(clock), // master clock and reset
        .reset(reset),
        .Nquant(Nquant), 
        .datain(datain), // set to 1 to start a division
        .endatain(endatain),   // set to 1 to load output registers
        .dataout(dataout)  // the operand  
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
reg [17:0] Men[0:64];
initial
begin
	$display("Teste 1");
    $dumpfile("requantize_tb.vcd");
    $dumpvars(0,requantize_tb);
    #(10*CLOCK_PERIOD );
    execdivide(18'b1000_0000_0000_0001_10,2);
    execdivide(18'b1000_0000_0000_0001_11,2);
    execdivide(18'b1000_0000_0000_0001_01,2);
    execdivide(18'b1000_0000_0000_0001_00,2);
    execdivide(18'b1000_0000_0000_0000_10,2);
    execdivide(18'b1000_0000_0000_0000_11,2);
    execdivide(18'b1000_0000_0000_0000_00,2);
    execdivide(18'b1000_0000_0000_0000_01,2);
    execdivide(18'b1000_0000_1000_0000_01,10);
    execdivide(18'b1000_0000_1000_0000_01,17);
    execdivide(18'b0000_0000_1000_0000_01,17);
    execdivide(18'b0000_0000_0110_0000_00,7);
	$stop;

end

 
// Execute a division:
task execdivide;
input [17:0] datain_tb,n;
integer i;
begin
    Nquant = n;
  datain = datain_tb;   // Apply operands
  endatain = 1'b1; 
  #(CLOCK_PERIOD);     // Assert start
  endatain = 1'b0;
  #(CLOCK_PERIOD); 
    #(CLOCK_PERIOD); 

  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
   #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  #(CLOCK_PERIOD); 
  
$display("dataout %b",dataout);
#(CLOCK_PERIOD); 
 end  
endtask

endmodule