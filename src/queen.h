/**
 * @author SSA
 */

#pragma once

#include "squares.h"

#include <stdbool.h>

typedef struct
{
    Square_st position;
} Queen_st;

/**
 * @brief Set the current position of the queen
 *
 * @param[in] queen  the queen to set the position (square) for
 * @param[in] row  the square's row
 * @param[in] col  the square's column
 *
 * @return nothing
 */
void Queen_setPosition(Queen_st *queen, int row, int col);

/**
 * @brief Check if the given square is threatened by the queen
 *
 * @param[in] queen  the input queen
 * @param[in] square  the input square
 *
 * @return true if the queen threatens the square, false otherwise
 *
 * @desc A queen threatens any square on the same row, column or diagonal as it.
 *
 * @note The queen does *not* threaten the square on which it lies. If the
 * square is *invalid*, or the queen itself is invalidly placed, the function
 * returns false.
 */
bool Queen_isSquareThreatened(Queen_st *queen, Square_st square);
