#include "stdio.h"
 #include "math.h"
 #include "unity.h"
int addition(int a, int b)
{
    int result=a+b;
    return result;
}
int subtraction(int a, int b)
{
    int result=a-b;
    return result;
}
int multiplication(int a, int b)
{
    int result=a*b;
    return result;
}
int division(int a, int b)
{
    int result=a/b;
    return result;
}
int modulus(int a, int b)
{
    int result=a%b;
    return result;
}
int power(int a,int b)
{

    int p=pow(a,b);
    return p;
   
     
    
}

/* Write all the test functions addition */ 
void test_addition()
{
   #if 0
    if(30== addition(10,20))
    printf("addition operation working\n");
    else
    printf("addition operation is not working\n");
 #endif
 TEST_ASSERT_EQUAL(30, addition(10,20));

}

/* Write all the test functions for subtraction */ 
void test_subtraction()
{
  #if 0
    if(10== subtraction(20,10))
    printf("subtraction operation working\n");
    else
    printf("subtraction operation is not working\n");
#endif

   TEST_ASSERT_EQUAL(10, subtraction(20,10));
}

/* Write all the test functions for multiplication*/ 
void test_multiplication()
{
    #if 0
    if(200== multiplication(20,10))
    printf("multiplication operation working\n");
    else
    printf("multiplication operation is not working\n");
#endif

   TEST_ASSERT_EQUAL(200, multiplication(20,10));
}

/* Write all the test functions for division*/ 
void test_division()
{
   #if 0
    if(2== division(20,10))
    printf("division operation working\n");
    else
    printf("division operation is not working\n");
 #endif 

    TEST_ASSERT_EQUAL(2, division(20,10));
}

/* Write all the test functions for modulus*/ 
void test_modulus()
{
   #if 0
    if(2== modulus(20,3))
    printf("modulus operation working\n");
    else
    printf("modulus operation is not working\n");
#endif

   TEST_ASSERT_EQUAL(2, modulus(20,3));
}

/* Write all the test functions for power*/ 
void test_power()
{
    #if 0
    if(4== power(2,2))
    printf("power operation working\n");
    else
    printf("power operation is not working\n");
#endif

    TEST_ASSERT_EQUAL(4, power(2,2));
}
#if 0
int main()
{
   test_addition();
   test_subtraction();
   test_multiplication();
   test_division();
   test_modulus();
   test_power();
    return 0;
}
#endif