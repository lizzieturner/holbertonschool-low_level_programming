#include "holberton.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: string
 * @needle: substring
 *
 * Return:  pointer to location in string that substring begins
 */

char *_strstr(char *haystack, char *needle)
{
	char *start, *p, *t;

	start = haystack;

	while (*start != '0')
	{
		p = start;
		t = needle;

		while (*t != '\0' && *p != '\0' && *t == *p)
		{
			t++;
			p++;
		}

		if (*t == '\0')
			return (start);

		start++;
	}

	return ('\0');
}
