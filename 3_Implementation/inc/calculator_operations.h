/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param a[in] operand1 to be added
* @param b[in] operand2 to be added
* @return Result of operand1 + operand2
*/
int addition(int a, int b);

/**
*  subtracts the operand1, operand2 and returns the result
* @param a[in] operand1
* @param b[in] operand2 
* @return Result of operand1 - operand2
*/
int subtraction(int a, int b);

/**
*  multiply the operand1, operand2 and returns the result
* @param a[in] operand1 
* @param b[in] operand2
* @return Result of operand1 * operand2
*/
int multiplication(int a, int b);


/**
* divides the operand1 by operand2 and returns the result 
* @param a[in] operand1 
* @param b[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int division(int a, int b);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */