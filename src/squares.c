/**
 * @author SSA
 */

#include "squares.h"

Square_st Squares_createSquare(int row, int col)
{
    Square_st square;
    square.r = row;
    square.c = col;
    return square;
}

bool Squares_areEqual(Square_st sq1, Square_st sq2)
{
    return (sq1.r == sq2.r) && (sq1.c == sq2.c);
}
