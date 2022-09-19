#include "main.h"
/**
 * print_rev - prints in reverse
 * @str: string
 *
 * Return: void
 */
void print_rev(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len --)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
