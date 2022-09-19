#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if ( i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
