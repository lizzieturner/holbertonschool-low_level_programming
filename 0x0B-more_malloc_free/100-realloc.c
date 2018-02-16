#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to original memory allocation
 * @old_size: size, in bytes, of original memory block
 * @new_size: size, in bytes, of new memory block
 *
 * Return: pointer to new memory block, null in certain edge cases
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (ptr == NULL)
		return (new_ptr);

	memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));

	free(ptr);

	return (new_ptr);
}
