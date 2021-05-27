#ifdef TEST

#include "unity.h"

#include "mock_calculator.h"
#include "algorithm.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_compute(void)
{
    addition_ExpectAndReturn(6,3,9);
    division_ExpectAndReturn(6,3,2);

    TEST_ASSERT_EQUAL_UINT32(11, compute(6,3));
}


#endif // TEST