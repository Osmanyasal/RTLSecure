`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.05.2026 11:15:58
// Design Name: 
// Module Name: aes_add_round_key
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module aes_add_round_key import aes_pkg::*; (
    input  logic       clk,
    input  logic       rst,
    input  logic       valid_in,
    input  aes_state_t state_in,
    input  aes_state_t key,
    output logic       valid_out,
    output aes_state_t state_out
);
always_ff @( posedge clk ) begin
    if ( rst ) begin
        valid_out <= 1'b0;
        state_out <= '0;
    end else begin
        valid_out <= valid_in;
        
        if ( valid_in ) begin
            for ( int col = 0; col < 4; col++ ) begin
                for ( int row = 0; row < 4; row++ ) begin
                    state_out[col][row] <= state_in[col][row] ^ key[col][row];
                end
            end
        end
    end
end
endmodule
