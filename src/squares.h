/**
 * @author SSA
 */

#pragma once

#include <stdbool.h>

#define MIN_ROW_VALUE (1)
#define MAX_ROW_VALUE (8)

#define MIN_COL_VALUE (MIN_ROW_VALUE)
#define MAX_COL_VALUE (MAX_ROW_VALUE)

#define SQUARE_IS_VALID(sq) \
    ((MIN_ROW_VALUE <= sq.r && sq.r <= MAX_ROW_VALUE) && \
     (MIN_COL_VALUE <= sq.c && sq.c <= MAX_COL_VALUE))

typedef struct
{
    int r;  /* row */
    int c;  /* column */
} Square_st;

Square_st Squares_createSquare(int row, int col);

bool Squares_areEqual(Square_st sq1, Square_st sq2);
