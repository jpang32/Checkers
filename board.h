# ifndef BOARD_H
# define BOARD_H

#include <stdbool.h>


typedef struct Board {

    // A Checkers board is an 8x8 board where each
    // row is recognized by a letters a through h,
    // and each column is represented by integers
    // 1 through 8

    // All pieces remain on the black squares for
    // the entirety of the game. Both players should
    // start the game with their pieces taking all of
    // the white squares in the first three rows of
    // their side of the board, with a red square in
    // the bottom right position of their side.

    // Red pieces will start out on rows a through c,
    // while black pieces will start out on rows f 
    // through h

    // First byte: row h --> last byte: row a
    // For each byte: First bit: column 1 --> last bit: column 8
    char matrix[8][8];

} Board;

bool has_piece(const Board* b, bool color, char position[]);
void print_board(const Board* b);

#endif