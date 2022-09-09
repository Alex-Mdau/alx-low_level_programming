#include <stdio.h>

/**
 * main - Print in lowercase the numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');

	return (0);
}
