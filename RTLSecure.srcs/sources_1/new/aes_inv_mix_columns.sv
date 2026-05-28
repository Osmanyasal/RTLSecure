`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.05.2026 20:16:07
// Design Name: 
// Module Name: aes_inv_mix_columns
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


module aes_inv_mix_columns import aes_pkg::*; (
    input  logic       clk,
    input  logic       rst,
    input  logic       valid_in,
    input  aes_state_t state_in,
    output logic       valid_out,
    output aes_state_t state_out
);

always_ff @(posedge clk) begin
    if (rst) begin
        valid_out <= 1'b0;
        state_out <= '0;
    end else begin
        valid_out <= valid_in;
        
        if (valid_in) begin
            // Implement the MixColumns transformation here
            // This is a placeholder for the actual MixColumns logic
            // You will need to implement the Galois Field multiplication and addition
            state_out <= state_in; // Replace with actual MixColumns output
        end
    end
end
endmodule
