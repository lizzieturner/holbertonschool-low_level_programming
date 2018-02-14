#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates a character array initialized by a specific character
 * @size: size of array
 * @c: character it is initialized with
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *new;
	unsigned int index;

	if (size <= 0)
		return (NULL);

	new = malloc(size * (sizeof(char)));

	if (new == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		new[index] = c;


	return (new);
}
