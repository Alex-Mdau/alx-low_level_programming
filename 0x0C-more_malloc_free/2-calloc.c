#include "main.h"

/**
 * _calloc - this allocates memory and sets all values to 0
 * @nmemb: Size
 * @size: size of the datatype
 *
 * Return: Pointer to calloced string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
