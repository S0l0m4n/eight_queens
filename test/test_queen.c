#ifdef TEST

#include "unity.h"

#include "squares.h"
#include "queen.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Queen_isSquareThreatened(void)
{
    Queen_st queen;
    Square_st square;

    Queen_setPosition(&queen, 3, 7); /* r = 3, c = 7 */

    /* A queen does not threaten the square on which it lies */
    square = Squares_createSquare(3,7);
    TEST_ASSERT_FALSE(Queen_isSquareThreatened(&queen, square));

    /* A queen threatens squares on the same row */
    square = Squares_createSquare(3,8);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(3,1);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    /* A queen threatens squares on the same column */
    square = Squares_createSquare(4,7);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(6,7);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    /* A queen threatens squares on the same (positive-sloping) diagonal */
    square = Squares_createSquare(2,6);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(1,5);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(4,8);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(5,8);
    TEST_ASSERT_FALSE(Queen_isSquareThreatened(&queen, square));

    /* A queen threatens squares on the same (negative-sloping) diagonal */
    square = Squares_createSquare(4,6);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(6,4);
    TEST_ASSERT_TRUE(Queen_isSquareThreatened(&queen, square));

    square = Squares_createSquare(1,8);
    TEST_ASSERT_FALSE(Queen_isSquareThreatened(&queen, square));

    /* A queen does not threaten an invalid square */
    square = Squares_createSquare(3,9);
    TEST_ASSERT_FALSE(Queen_isSquareThreatened(&queen, square));

    /* A bad queen (invalid position does not threaten any squares */
    Queen_setPosition(&queen, 2,10);
    square = Squares_createSquare(2,4);
    TEST_ASSERT_FALSE(Queen_isSquareThreatened(&queen, square));
}

#endif // TEST
