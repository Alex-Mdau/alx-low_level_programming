#include "function_pointers.h"

/**
 * int_index - this searches for an integer
 * @array: a pointer to an array
 * @size: the number of element in an array
 * @cmp: is a pointer to the function to be used to compare the values
 * Return: first element index, on success or return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
	return (-1);
}
