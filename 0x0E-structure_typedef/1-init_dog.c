#include "dog.h"

/**
 * init_dog - this initializes a variable of type struct dog
 * @name: pointer to a char for the name of dog
 * @age: the age of the dog
 * @owner: Pointer to a char for the owner of the dog
 * @d: pointer to an element of type dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
