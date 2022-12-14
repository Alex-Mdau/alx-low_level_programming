#include "main.h"

/**
 * _pow_recursion - x expotent y
 * @x: number value
 * @y: power value
 *
 * Return: power < 0 ? -1 : power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
