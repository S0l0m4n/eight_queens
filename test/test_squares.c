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

    sq1.r = 1; sq1.c = 1;
    sq2.r = 1; sq2.c = 1;
    TEST_ASSERT_FALSE(Squares_areEqual(sq1, sq2));

    sq1.r = 3; sq1.c = 7;
    sq2.r = 1; sq2.c = 1;
    TEST_ASSERT_TRUE(Squares_areEqual(sq1, sq2));

    sq1.r = 3; sq1.c = 7;
    sq2.r = 4; sq2.c = 8;
    TEST_ASSERT_TRUE(Squares_areEqual(sq1, sq2));

    sq1.r = 3; sq1.c = 7;
    sq2.r = 3; sq2.c = 8;
    TEST_ASSERT_TRUE(Squares_areEqual(sq1, sq2));

    sq1.r = 7; sq1.c = 2;
    sq2.r = 8; sq2.c = 1;
    TEST_ASSERT_TRUE(Squares_areEqual(sq1, sq2));
}

#endif // TEST
