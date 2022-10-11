#include "dog.h"

/**
 * free_dog - this frees all dogs
 * @d: the pointer to a dog of type dog_t
 * Return : Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
