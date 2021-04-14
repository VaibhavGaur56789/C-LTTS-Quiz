#include "unity_internals.h"
#include "unity.h"
#include "mymath.h"

void setUp() {};
void tearDown() {};


void test_displayscore(void)
{
    TEST_ASSERT_EQUAL(displayscore());
}


void test_writescore(void)
{
    TEST_ASSERT_EQUAL(73.0, writescore(73 > 63));
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_writeScore);
    RUN_TEST(test_displayscore);

    return UNITY_END();
}
