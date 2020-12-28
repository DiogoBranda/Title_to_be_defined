/*
    
	Authors: Diogo Silva(up201809213) & Joao Pereira(up201909554)
	
	University: FEUP - MIEEC - PSDi 2020/21
	
	Brief Description:

    This module receives a sequence of data samples at the sampling
    frequency of 48 kHz, synchronized by signal DIN_RDY, & reduces
    the sampling frequency to an integer multiple N of the input
    sampling frequency (N must be between 2 and 10).
    This module    outputs the input sample received at each N
    sampling cycles.


*/

module downsample(
    input clock, // Master clock
    input reset, // master reset, synchronous, active high
    input [4:0] Nfreq, // sampling rate divide factor
    input [17:0] datain, // input data
    input endatain, // in clock enable, Fs=48kHz
    output [17:0] dataout, // output data
    output endataout // out clock enable, Fs = 48kHz/Nfreq
 );

reg [17:0] data_aux;
reg endataout_aux;
//reg [5:0] cont ;
reg signed [7:0] cont ;
always @(posedge clock)
    begin
        
    if ( reset == 1'b1 )begin
        //cont <= 0; //For FPGA
		  cont <= -27; // Delay to wait for the right samples to arrive
        endataout_aux<=0;
        data_aux<=0;
    end

    else
    if ( endatain == 1'b1  ) begin
        
        
        if(cont==0) begin
            endataout_aux<=1'b1;
				data_aux<=datain;
				cont<=cont+4'd1;    //register the inputs
        end

        else if(cont == Nfreq-4'd1) begin
            cont<=0;
				//data_aux<=datain;
        end
		  else 
				cont<=cont+4'd1;    //register the inputs

    end
    else 
       endataout_aux<=0;
end

assign dataout = data_aux;
assign endataout = endataout_aux;

endmodule