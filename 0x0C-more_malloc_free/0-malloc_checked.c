#include "main.h"

/**
 * malloc_checked - this allocates memory using malloc
 * @b: size of the memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
