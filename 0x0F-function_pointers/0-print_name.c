#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: a pointer to  a char
 * @f: pointer to function that returns nothing
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
