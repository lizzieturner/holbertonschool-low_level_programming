#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: 98 if malloc fails, pointer to memory allocated otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);

	if (new_mem == NULL)
		exit (98);

	else
		return (new_mem);
}
