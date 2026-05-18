`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 18.05.2026 15:05:18
// Design Name: 
// Module Name: AES
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: AES (Advanced Encryption Standard) Implementation
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module AES #(parameter DATA_WIDTH=8)(   // single pixel.
    input logic clk,
    input logic rst,
    input logic [DATA_WIDTH-1:0] in_data,
    output logic [DATA_WIDTH-1:0] out_data
    );
    
endmodule
