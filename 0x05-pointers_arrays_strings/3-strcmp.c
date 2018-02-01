#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -1 if first string is less than second string, 1 if first string is greater than second string, and 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] < s2[index])
			return (s1[index] - s2[index]);

		else if (s1[index] > s2[index])
			return (s1[index] - s2[index]);
	}

	return (0);
}
