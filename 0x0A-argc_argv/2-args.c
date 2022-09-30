#include "main.h"

/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: array of parameters
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
