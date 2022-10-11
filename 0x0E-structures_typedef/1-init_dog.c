#include "dog.h"

/**
 * init_dog - this initializes variables of type struct dog
 * @name: the pointer to a char for name of dog
 * @age: age of the dog
 * @owner: the pointer to a char for owner of the dog
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
