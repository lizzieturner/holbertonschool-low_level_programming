#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string consisting of concatenated strings
 * or return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int index = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len1++:
	len2++;

	new = malloc((len1 + len2) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		new[index] = s1[index];

	for (index = 0; index < len2; index++)
		new[index + len1] = s2[index];

	return (new);
}
