# ifndef PIECE_H
# define PIECE_H

#include <stdbool.h>
#include "board.h"


typedef struct Piece
{
    Board board;

    // RED: 0
    // BLACK: 1
    bool color;
    bool is_king;
    char position[3];

} Piece;

bool is_valid_move(const Piece* p, char position[]);

bool is_valid_capture(const Piece* p, char position[]);

# endif