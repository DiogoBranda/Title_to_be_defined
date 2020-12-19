//-------------------------------------------------------------------------------
//  
//  jca@fe.up.pt,  Dec 2020
//	
//	This Verilog code is property of University of Porto
//	Its utilization beyond the scope of the course Digital Systems Design
//	(Projeto de Sistemas Digitais) of the Integrated Master in Electrical 
//	and Computer Engineering requires explicit authorization from the author.
//-------------------------------------------------------------------------------

module DPRAM(
               // Port 1 - read/write:
               input               clock1,
			   input      [ 6: 0]  addr1,
			   input               we1,
			   input      [17: 0]  datain1,
			   output reg [17: 0]  dataout1,
			   
			   // Port 2 - read only
               input               clock2,
			   input      [ 6: 0]  addr2,
			   output reg [17: 0]  dataout2
			 );

			 
// pre-load datafile:
parameter MEM_INIT_FILENAME = "../simdata/FIR.hex";

reg [17:0] RAM [0:127];

// Memory initialization:
// NOTE: to be synthesizable, the datafile must
// have exactly the number of datawords required
// to fill the whole memory:
initial
begin
  $readmemh( MEM_INIT_FILENAME, RAM );
end



// write/read process, port 1:
always @(posedge clock1)
begin
  if ( we1 )
    RAM[ addr1 ] <= datain1;
  dataout1 <= RAM[ addr1 ]; 
end	

// Read only process, port 2:
always @(posedge clock2)
begin
  dataout2 <= RAM[ addr2 ]; // Read data from memory
end			 
		
endmodule
		