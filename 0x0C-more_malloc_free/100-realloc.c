#include "main.h"

/**
 * _realloc - this reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: size already allocated
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned char *np;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	np = malloc(new_size * sizeof(char));
	if (np == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			np[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (np);
	}
	while (i < new_size)
		/*if old_size > new_size*/
	{
		np[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (np);
}
