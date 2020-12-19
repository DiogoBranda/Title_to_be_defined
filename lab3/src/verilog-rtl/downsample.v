/*
    Title: Block Downsample

    University: FEUP MIEEC PSDi 2020/21

    Date: 13/12/2020

    Author: Joao Pereira (up201909554@fe.up.pt)

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
    input [3:0] Nfreq, // sampling rate divide factor
    input [17:0] datain, // input data
    input endatain, // in clock enable, Fs=48kHz
    output [17:0] dataout, // output data
    output endataout // out clock enable, Fs = 48kHz/Nfreq
 );

reg [17:0] data_aux, out_aux;
reg [5:0] indice, indice_aux;
reg endataout_aux;
reg [5:0] cont ;
always @(posedge clock)
    begin
        
    if ( reset == 1'b1 )begin
        cont <= 0;
        endataout_aux<=0;
        data_aux<=0;
    end

    else
    if ( endatain == 1'b1  ) begin
        cont<=cont+1;    //register the inputs
        
        if(cont==0) begin
            data_aux<=datain;
            endataout_aux<=1;
        end

        if(cont>=Nfreq-1) begin
            cont<=0;
        end

    end
    else 
       endataout_aux<=0;
end
/*always @(negedge clock) begin
    endataout_aux<=0;
end*/
assign dataout = data_aux;
assign endataout = endataout_aux;

endmodule