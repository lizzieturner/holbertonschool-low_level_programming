#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size, in bytes, of each element
 *
 * Return: pointer to array, null if function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_array = malloc(nmemb * size);

	if (new_array == NULL)
		return (NULL);

	return (new_array);
}
