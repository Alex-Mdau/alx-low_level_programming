#include "main.h"

/**
 * print_sign - Detremine if the input is greater than , less than or equal to 0
 *
 * @n: The input number as an integer
 *
 * Return: 1 is greater than 0,otherwise 0 is 0,-1 is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
