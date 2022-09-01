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
    // the black squares in the first two rows of
    // their side of the board, with a white square in
    // the bottom right position of their side.

    // First byte represents rows
    // Second byte represents columns
    unsigned short black_positions;
    unsigned short white_positions;

} Board;

bool has_piece(const Board* b, char* position);

#endif