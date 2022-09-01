# ifndef PIECE_H
# define PIECE_H

#include <stdbool.h>
#include "board.h"

typedef struct Piece
{
    Board board;

    /* data */
    bool color;

} Piece;

bool is_valid_move(const Piece* p, char* position1, char* position2);

bool is_valid_capture(const Piece* p, char* position1, char* position2);

# endif