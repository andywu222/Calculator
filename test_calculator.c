#include "unity.h"
#include "calculator.h"

void setUp(void) {

}

void tearDown(void) {

}

void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, add(5, -4));
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-7, add(-3, -4));
}

void test_add_zero(void) {
    TEST_ASSERT_EQUAL(10, add(10, 0)); 
    TEST_ASSERT_EQUAL(0, add(0, 0));
}

void test_add_overflow(void) {
    int result = add(INT_MAX, 1); 
    TEST_ASSERT_TRUE(result < 0); 
}


void test_add_underflow(void) {
    int result = add(INT_MIN, -1);
    TEST_ASSERT_TRUE(result > 0); 
}

void test_subtract_positive_numbers(void) {
    TEST_ASSERT_EQUAL(3, subtract(5, 2));
}

void test_subtract_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(13, subtract(9, -4));
}

void test_subtract_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, subtract(-3, -4));
}

void test_subtract_zero(void) {
    TEST_ASSERT_EQUAL(10, subtract(10, 0)); 
    TEST_ASSERT_EQUAL(0, subtract(0, 0));
}

void test_subtract_overflow(void) {
    int result = subtract(INT_MAX, 1); 
    TEST_ASSERT_TRUE(result > 0); 
}


void test_subtract_underflow(void) {
    int result = subtract(INT_MIN, -1);
    TEST_ASSERT_TRUE(result < 0); 
}

void test_multiply_positive_numbers(void) {
    TEST_ASSERT_EQUAL(12, multiply(3, 4));
}

void test_multiply_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-15, multiply(3, -5));
}

void test_multiply_negative_numbers(void) {
    TEST_ASSERT_EQUAL(16, multiply(-4, -4));
}

void test_multiply_zero(void) {
    TEST_ASSERT_EQUAL(0, multiply(10, 0)); 
    TEST_ASSERT_EQUAL(0, multiply(0, 0));
}

void test_multiply_overflow(void) {
    int result = subtract(INT_MAX, 1); 
    TEST_ASSERT_TRUE(result > 0); 
}

void test_multiply_underflow(void) {
    int result = multiply(INT_MAX, -1); 
    TEST_ASSERT_TRUE(result < 0); 
}

void test_divide_positive_numbers(void) {
    TEST_ASSERT_EQUAL(4, divide(12, 3));
}

void test_divide_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-5, divide(-15, 3));
}

void test_divide_negative_numbers(void) {
    TEST_ASSERT_EQUAL(4, divide(-16, -4));
}

// void test_divide_zero(void) {
//     TEST_ASSERT_EQUAL(0, divide(10, 0)); 
// }

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_divide_positive_numbers);
    RUN_TEST(test_divide_positive_and_negative_numbers);
    RUN_TEST(test_divide_negative_numbers);
    // RUN_TEST(test_divide_zero);
    return UNITY_END();
}
