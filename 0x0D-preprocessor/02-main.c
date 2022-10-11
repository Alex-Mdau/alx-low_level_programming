#include <stdio.h>

/**
 * main - this prints name of compilation file with a new line
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
