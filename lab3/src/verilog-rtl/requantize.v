/*
	Authors: Diogo Silva(up201809213) & Joao Pereira(up201909554)
	
	University: FEUP - MIEEC - PSDi 2020/21
	
	Brief Description:
	
	reduces the number of bits of the input samples to a smaller number M between 17
	and 3 and scales the output to the 18 bit dynamic range to keep the output	samples 
	represented in 18 bits. This module performs the following operation, where xk 
	represents the input sample and yk is the	output sample: yk=round(xk/2^(m)*2^(m), 
	note that m=(18-M), this atribution was done prior to this module

*/


module requantize(
    input clock, // Master clock
    input reset, // master reset, synchronous, active high
    input [4:0] Nquant, // No. of output quantization bits
    input [17:0] datain, // input data
    input endatain, // input data clock enable
    output [17:0] dataout // output data
); 

reg [6:0] cont; // Numero de samples processados
reg [17:0] temp;
reg [17:0] temp2;
parameter SIZE = 2;
parameter Wait_DIN_RDY  = 2'b00,TesteBit = 2'b01 ,Analise = 2'b10,Multiplica = 2'b11 ;
reg   [SIZE-1:0] state;// Seq part of the FSM

reg flag_1;
reg flag_up;



//Implementaçao
always @ (posedge clock)
begin : FSM
    if (reset == 1'b1) begin // Quando reset
       cont<=0;
       state <=  Wait_DIN_RDY;
       flag_1<=0;
       flag_up<=0;
		 temp2<=0;
		 temp<=0;
    end 

    else

    case(state)
        
        Wait_DIN_RDY :  
		  if (endatain ==1) begin //Neste estado fica a espera do sinal para ir ler
            temp <=datain >> 1;
            cont<=cont+1;
            if(datain[0]==1)begin
                state <=  TesteBit;
                flag_1<=1;
            end
            else begin
                state <=  TesteBit;
            end
        end
        
        TesteBit : if (cont<Nquant-1) begin// O bit anterior foi 1
            temp <= temp >> 1;
            state <= TesteBit;
            cont<=cont+1;
            if (temp[0]==1 ) begin
                flag_1<=1;  
            end 
        end
        else if(cont==Nquant-1) begin
            if (temp[0]==1 )begin
                if(flag_1==1) begin
                    flag_up<=1;
                end
                else if(temp[1]==1) begin
                    flag_up<=1;
                end
            end
            temp <= temp >> 1;
            state <= Analise;
            cont<=cont+1;
        end
        

        Analise :if (cont==Nquant) begin
            if (flag_up==1) begin
                temp <= temp+18'b0000_0000_0000_0000_01;        
            end
            state <= Multiplica;
       end

      Multiplica:if(cont>0) begin
            temp <=temp << 1;
            cont<=cont-1;      
        end
        else begin
            flag_1<=0;
            cont<=0;
            flag_up<=0;
            state <=  Wait_DIN_RDY;
				temp2<=temp;
        end
        default : state <=   Wait_DIN_RDY;
    endcase
end
assign dataout=temp2;
endmodule
