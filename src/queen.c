/**
 * @author SSA
 */

#include "queen.h"

#include "squares.h"

void Queen_setPosition(Queen_st *queen, int row, int col)
{
    queen->position = Squares_createSquare(row, col);
}

bool Queen_isSquareThreatened(Queen_st *queen, Square_st square)
{
    if (false == SQUARE_IS_VALID(queen->position)
    ||  false == SQUARE_IS_VALID(square))
    {
        /* Squares must be valid */
        return false;
    }

    if (Squares_areEqual(queen->position, square))
    {
        /* Queen cannot threaten its own square */
        return false;
    }

    bool ret = true;

    if (queen->position.r == square.r)
    {
        /* Same row */
    }
    else if (queen->position.c == square.c)
    {
        /* Same column */
    }
    else
    {
        /* Check diagonals */
        int xd = queen->position.r - square.r; /* horizontal difference */
        int yd = queen->position.c - square.c; /* vertical difference */
        ret = (xd * xd == yd * yd);
    }

    return ret;
}
