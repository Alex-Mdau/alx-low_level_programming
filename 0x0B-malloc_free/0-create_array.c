#include "main.h"

/**
 * *create_array - This creates an array of chars
 * and initializes it with a char
 * @size: size of the array
 * @c: char that is to be initialized
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
