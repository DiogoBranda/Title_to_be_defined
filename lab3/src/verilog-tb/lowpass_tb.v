/* 
PSD 2020/21
Lab 1 - Design and verification of a sequential non-restoring divider
*/
`timescale 1ns/1ns
`include "lowpass.v"

module lowpass_tb;
  
parameter CLOCK_PERIOD = 10;

parameter MAX_SIM_TIME = 100_000_000;

  
reg  clock, reset;
reg  endata;
reg  [17:0] datain;
wire [17:0] coefdata;
wire [17:0] dataout;
wire [ 6:0] coefaddress;

lowpass lowpass_1

      ( .clock(clock), // master clock and reset
        .reset(reset), 
        .datain(datain), // set to 1 to start a division
        .endata(endata),   // set to 1 to load output registers
        .dataout(dataout),  // the operands
        .coefaddress(coefaddress), 
        .coefdata(coefdata)  // the results
        ); 
     
        
// Setup initial signals, generate 50% duty-cycle clock:
initial
begin
  clock = 1'b0;
  reset = 1'b0;
  datain = 18'd0;
  endata = 1'b0;
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
assign coefdata=Men[coefaddress];


//---------------------------------------------------
// The verifications:
reg [17:0] Men[0:64];
initial
begin
	$display("Teste 1");
  Men[0]<=18'h00000;
  Men[1]<=18'h3FFFD;
  Men[2]<=18'h3FFFC;
  Men[3]<=18'h3FFFD;
  Men[4]<=18'h00000;
  Men[5]<=18'h00005;
  Men[6]<=18'h00008;
  Men[7]<=18'h00006;
  Men[8]<=18'h3FFFF;
  Men[9]<=18'h3FFF5;
  Men[10]<=18'h3FFEF;
  Men[11]<=18'h3FFF3;
  Men[12]<=18'h00001;
  Men[13]<=18'h00015;
  Men[14]<=18'h00021;
  Men[15]<=18'h00019;
  Men[16]<=18'h3FFFE;
  Men[17]<=18'h3FFDA;
  Men[18]<=18'h3FFC5;
  Men[19]<=18'h3FFD2;
  Men[20]<=18'h00003;
  Men[21]<=18'h00042;
  Men[22]<=18'h00068;
  Men[23]<=18'h00053;
  Men[24]<=18'h3FFFD;
  Men[25]<=18'h3FF87;
  Men[26]<=18'h3FF37;
  Men[27]<=18'h3FF54;
  Men[28]<=00004;
  Men[29]<=00131;
  Men[30]<=00287;
  Men[31]<=00397;
  Men[32]<=18'h003FE;
  Men[33]<=00397;
  Men[34]<=00287;
  Men[35]<=00131;
  Men[36]<=00004;
  Men[37]<=18'h3FF54;
  Men[38]<=18'h3FF37;
  Men[39]<=18'h3FF87;
  Men[40]<=18'h3FFFD;
  Men[41]<=18'h00053;
  Men[42]<=18'h00068;
  Men[43]<=18'h00042;
  Men[44]<=18'h00003;
  Men[45]<=18'h3FFD2;
  Men[46]<=18'h3FFC5;
  Men[47]<=18'h3FFDA;
  Men[48]<=18'h3FFFE;
  Men[49]<=18'h00019;
  Men[50]<=18'h00021;
  Men[51]<=18'h00015;
  Men[52]<=18'h00001;
  Men[53]<=18'h3FFF3;
  Men[54]<=18'h3FFEF;
  Men[55]<=18'h3FFF5;
  Men[56]<=18'h3FFFF;
  Men[57]<=18'h00006;
  Men[58]<=18'h00008;
  Men[59]<=18'h00005;
  Men[60]<=18'h00000;
  Men[61]<=18'h3FFFD;
  Men[62]<=18'h3FFFC;
  Men[63]<=18'h3FFFD;
  Men[64]<=18'h00000;
	
  # (10*CLOCK_PERIOD )
	execdivide( 18'h00000, 1 ); // call task
  execdivide( 18'h3FFEA, 2 );
  execdivide( 18'h00181, 3 );
  execdivide( 18'h001FC, 4 );
  execdivide( 18'h0019E, 5 );
  execdivide( 18'h001BD, 6 );
  execdivide( 18'h001B8, 7 );
  execdivide( 18'h001B5, 8 );
  execdivide( 18'h001DD, 9 );
  execdivide( 18'h001C3, 10 );
  execdivide( 18'h001C4, 11 );
 
	$stop;

end

 
// Execute a division:
task execdivide;
input [17:0] datain_tb,n;
integer i;
begin

  datain = datain_tb;   // Apply operands
  endata = 1'b1; 
  #(CLOCK_PERIOD);     // Assert start
  endata = 1'b0;
  #(CLOCK_PERIOD);
  for ( i=0; i<64; i=i+1) begin
  
    #(CLOCK_PERIOD);
    #(CLOCK_PERIOD);
  end
  #(CLOCK_PERIOD);
  #(CLOCK_PERIOD);
  $display("dataout = %h %d", dataout,n);
  

 end  
endtask

endmodule