#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a series of characters
 * @s: string
 * @accept: characters to search for
 *
 * Return: pointer to first occurence of byte from accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int index, a_index;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (a_index = 0; accept[a_index] != '\0'; a_index++)
		{
			if (s[index] == accept[a_index])
			{
				s = &s[index];
				return(s);
			}
		}
	}

	return ('\0');
}
