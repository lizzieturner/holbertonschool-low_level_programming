#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates a new dog
 * @d: structure containing all dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
