`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 23.05.2026 21:28:08
// Design Name: 
// Module Name: aes_pkg
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

package aes_pkg;
    // Fully packed array: [4 columns] [4 rows] [8 bits]
    // This is treated by the synthesizer as a contiguous 128-bit vector
    localparam int DATA_WIDTH = 128;
    localparam int NUM_COLS = 4;
    localparam int NUM_ROWS = 4;
    localparam int BYTE_WIDTH = 8;
    typedef logic [NUM_COLS-1:0][NUM_ROWS-1:0][BYTE_WIDTH-1:0] aes_state_t;
endpackage