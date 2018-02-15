#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from string 2 to include
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int index, index2, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	new_string = malloc((len1 + (n + 1)) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		new_string[index] = s1[index];

	for (index2 = 0; index2 < n; index2++)
	{
		new_string[index] = s2[index2];
		index++;
	}

	new_string[index] = '\0';

	return (new_string);
}
