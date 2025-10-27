#include "unity.h"
#include "logic.h"

void setUp() {}
void tearDown() {}

void test_logic_and(void) {
    TEST_ASSERT_FALSE(logic_and(0,0));
    TEST_ASSERT_FALSE(logic_and(0,1));
    TEST_ASSERT_FALSE(logic_and(1,0));
    TEST_ASSERT_TRUE(logic_and(1,1));
}

void test_logic_or(void) {
    TEST_ASSERT_FALSE(logic_or(0,0));
    TEST_ASSERT_TRUE(logic_or(0,1));
    TEST_ASSERT_TRUE(logic_or(1,0));
    TEST_ASSERT_TRUE(logic_or(1,1));
}

void test_logic_nand(void) {
    TEST_ASSERT_TRUE(logic_nand(0,0));
    TEST_ASSERT_TRUE(logic_nand(0,1));
    TEST_ASSERT_TRUE(logic_nand(1,0));
    TEST_ASSERT_FALSE(logic_nand(1,1));
}

void test_logic_nor(void) {
    TEST_ASSERT_TRUE(logic_nor(0,0));
    TEST_ASSERT_FALSE(logic_nor(0,1));
    TEST_ASSERT_FALSE(logic_nor(1,0));
    TEST_ASSERT_FALSE(logic_nor(1,1));
}

void test_logic_xor(void) {
    TEST_ASSERT_FALSE(logic_xor(0,0));
    TEST_ASSERT_TRUE(logic_xor(0,1));
    TEST_ASSERT_TRUE(logic_xor(1,0));
    TEST_ASSERT_FALSE(logic_xor(1,1));
}

void test_logic_xnor(void) {
    TEST_ASSERT_TRUE(logic_xnor(0,0));
    TEST_ASSERT_FALSE(logic_xnor(0,1));
    TEST_ASSERT_FALSE(logic_xnor(1,0));
    TEST_ASSERT_TRUE(logic_xnor(1,1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_logic_and);
    RUN_TEST(test_logic_or);
    RUN_TEST(test_logic_nand);
    RUN_TEST(test_logic_nor);
    RUN_TEST(test_logic_xor);
    RUN_TEST(test_logic_xnor);
    return UNITY_END();
}