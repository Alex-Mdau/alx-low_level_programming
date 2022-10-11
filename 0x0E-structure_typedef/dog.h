#ifndef _DOG_H
#define _DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - the structure for dogs
 * @name: The first member
 * @age: the second member
 * @owner: the third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
