#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: struct to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(1);

	free(d->name);
	free(d->owner);
	free(d);
}
