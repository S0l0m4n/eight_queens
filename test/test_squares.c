#ifdef TEST

#include "unity.h"

#include "squares.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Squares_areEqual(void)
{
    Square_st sq1, sq2;

    sq1 = Squares_createSquare(1, 1);
    sq2 = Squares_createSquare(1, 1);
    TEST_ASSERT_TRUE(Squares_areEqual(sq1, sq2));

    sq1 = Squares_createSquare(3, 7);
    sq2 = Squares_createSquare(1, 1);
    TEST_ASSERT_FALSE(Squares_areEqual(sq1, sq2));

    sq1 = Squares_createSquare(3, 7);
    sq2 = Squares_createSquare(4, 8);
    TEST_ASSERT_FALSE(Squares_areEqual(sq1, sq2));

    sq1 = Squares_createSquare(3, 7);
    sq2 = Squares_createSquare(3, 8);
    TEST_ASSERT_FALSE(Squares_areEqual(sq1, sq2));

    sq1 = Squares_createSquare(7, 2);
    sq2 = Squares_createSquare(7, 2);
    TEST_ASSERT_TRUE(Squares_areEqual(sq1, sq2));
}

#endif // TEST
