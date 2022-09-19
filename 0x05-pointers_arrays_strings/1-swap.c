#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: value to be evaluated
 * @b: value to be evaluated
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
