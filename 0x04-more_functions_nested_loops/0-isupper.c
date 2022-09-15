#include "main.h"

/**
 * _isupper - function that verifies ia character is an uppercase or not
 * @c: character to be tested
 * Return: return 1 if it is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
