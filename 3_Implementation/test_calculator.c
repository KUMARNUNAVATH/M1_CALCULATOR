#include "unity.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
extern void test_addition();
extern void test_subtraction();
extern void test_multiplication();
extern void test_division();
extern void test_modulus();
extern void test_power();
/* Required by the unity test framework */
void setUp (void)
{

}

/* Required by the unity test framework */
void tearDown(void)
{

}

/* Initiate the Unity Test Framework */
int main(void)
{
     UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    RUN_TEST(test_modulus);
    RUN_TEST(test_power);

/* Close the Unity Test Framework */
   return UNITY_END();
}