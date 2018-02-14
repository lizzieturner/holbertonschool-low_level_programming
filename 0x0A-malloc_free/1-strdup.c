#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - allocate a space in memory containing a copy of a string
 * @str: string to copy
 *
 * Return: pointer to new string
 * or NULL is str = NULL or insufficient memory available
 */

char *_strdup(char *str)
{
	char *new;
	unsigned int index;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new = malloc(length * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (index = 0; index < length; index++)
		new[index] = str[index];

	new[index] = '\0';

	return (new);
}
