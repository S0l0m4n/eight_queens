/**
 * @author SSA
 */

#pragma once

#include <stdbool.h>

#define MIN_ROW_VALUE (1)
#define MAX_ROW_VALUE (8)

#define MIN_COL_VALUE (MIN_ROW_VALUE)
#define MAX_COL_VALUE (MAX_ROW_VALUE)

typedef struct
{
    int r;  /* row */
    int c;  /* column */
} Square_st;

bool Squares_areEqual(Square_st sq1, Square_st sq2);
