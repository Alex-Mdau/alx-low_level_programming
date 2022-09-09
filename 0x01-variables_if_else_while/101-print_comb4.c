#include <stdio.h>

/**
 * main - print a combination of three digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			for (hundreds = tens + 2; hundreds <= 9; hundreds++)
			{
				putchar(tens + '0');
				putchar(ones + '0');
				putchar(hundreds + '0');

				if (tens < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
