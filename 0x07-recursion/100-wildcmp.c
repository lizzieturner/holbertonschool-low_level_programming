#include "holberton.h"

/**
 * wildcmp - compare two strings
 * string 2 may contain wildcards, which can expand to replace any string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if strings match, 2 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (*s1 == '\0')
			return (0);

		if (*(s1 + 1) != *(s2 + 1))
			return (wildcmp(s1 + 1, s2));

		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s1 != *s2)
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
