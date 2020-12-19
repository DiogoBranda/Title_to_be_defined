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

parameter SIZE = 5;
parameter Wait_DIN_RDY  = 3'b001,TesteBit = 3'b010 ,Analise = 3'b011,Multiplica = 3'b100, R_UP=3'b101 ;
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
    end 

    else

    case(state)
        
        Wait_DIN_RDY :  if (endatain ==1) begin //Neste estado fica a espera do sinal para ir ler
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
        end
        default : state <=  #1  Wait_DIN_RDY;
    endcase
end
assign dataout=temp;
endmodule
