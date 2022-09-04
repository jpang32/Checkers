#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "color.h"
#include "piece.h"
#include "utils.h"

bool is_valid_move(const Piece* p, char position[]) {

    // Check that positions are both valid
    if (!is_valid_position(position)) {
        printf("Invalid move: bad position\n");
        return false;
    }

    // Check that move is diagonal
    if (!( abs(p->position[0] - position[0]) == abs(p->position[1] - position[1]) )) {
        printf("Invalid move: not diagonal\n");
        return false;
    }

    // Check that move goes forward
    // This is defined differently for black and white pieces
    if ( !(p->is_king) && 
        (( p->color == RED && position[0] < p->position[0]) 
        || ( p->color == BLACK && position[0] > p->position[0])) ) {
        printf("Invalid move: not forward\n");
        return false;
    }

    // Check that there does not exist a piece at position2 on the board
    // Requires has_piece() to be implemented in board

    // Check if piece moves forward by more than one space
    // If so, it should be a valid capture
    // We only need to compare one of the axises of the move
    // since we already know that it is diagonal at this point
    // if ( abs(p->position[0] - position[0]) > 1 && !is_valid_capture(p, position)) {
    //     return false;
    // }

    return true;

};