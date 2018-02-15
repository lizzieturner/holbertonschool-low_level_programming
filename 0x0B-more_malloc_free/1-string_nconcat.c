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

	len2++;

	if (n >= len2)
		n = len2;

	new_string = malloc((len1 + n) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		new_string[index] = s1[index];

	for (index = 0; index < n; index++)
		new_string[index + len1] = s2[index];

	return (new_string);
}
