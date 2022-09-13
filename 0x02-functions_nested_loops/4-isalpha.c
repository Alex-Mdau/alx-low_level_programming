#include "main.h"

/**
 * _isalpha - If  c is the input then show 1
 * Any other case, show 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for letters, otherewise Return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
