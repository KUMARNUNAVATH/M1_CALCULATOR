
  
#include <calculator_operations.h>

int additions(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if(0 == a)
        return 0;
    else
        return a / b;
}