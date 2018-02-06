#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: string
 * @accept: bytes to check for
 *
 * Return: the number of bytes in prefix of s
 * which consist only of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, a_index, count, x;

	count = 0;

	for (index = 0; s[index]; index++)
	{
		x = count;
		for (a_index = 0; accept[a_index]; a_index++)
		{
			if (s[index] == accept[a_index])
			    count++;
		}

		if (count == x)
			break;
	}

	return (count);
}
