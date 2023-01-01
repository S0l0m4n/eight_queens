README
======
Problem
-------
Place eight chess queens on an 8x8 chessboard so that no two queens threaten each other. Thus, a solution requires that no two queens share the same row, column, or diagonal.

[source: http://en.wikipedia.org/wiki/Eight_queens_puzzle]

Discussion
----------
Let's number the rows and columns from 1 to 8 (instead of using the chess nomenclature of ranks 1 - 8 and files a - h). Thus, we can denote a square with a pair of coordinates `(r, c)` where `r` is the row and `c` the column.

Once a queen is placed on a square (x, y), then any other queen cannot be on row x and column y. The diagonal squares covered by the queen on (x, y) are all squares adhering to the formula (x+n, y+n), for positive and negative n such that `1 <= x+n <= 8` and `1 <= y+n <= 8`.

This means we can attempt to place the queens in sequence, starting with the first arbitrarily placed queen, and then placing each subsequent queen on a square that does not have the same row nor the same column as the preceding queens. The only additional work required is to check that the queen to be placed does not land on a diagonal covered by the other queens.

Definitions
-----------
A square will consist of a integer row r and column c. Any value outside of the range [1, 8] for either r or c results in an invalid square.
