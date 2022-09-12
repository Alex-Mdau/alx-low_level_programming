#include "main.h"

/**
 * _islower - if a is the input show 1
 * lowercase character. Any other case, show 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
