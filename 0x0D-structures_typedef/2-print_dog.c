#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);

		if (d->age != 0.0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		printf("Owner: %s\n", d->owner);
	}
}
