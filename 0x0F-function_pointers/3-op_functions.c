#include "3-calc.h"

/**
 * op_mod - this calculates mod of two numbers
 * @a: number 1
 * @b: number 2
 * Return: Result of mod of 1, 2
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}

/**
 * op_add - this adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: Result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_div - this divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: Result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_sub - this subtracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: Result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
