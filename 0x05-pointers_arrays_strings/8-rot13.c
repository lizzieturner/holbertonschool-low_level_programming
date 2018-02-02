#include "holberton.h"

/**
 * rot13 - translates string to rot13
 * @s: string
 *
 * Return: pointer to string
 */

char *rot13(char *s)
{
	int index, alpha_index;

	char alpha[52] = {'a', 'b', 'c', 'd', 'e', 'f',
			  'g', 'h', 'i', 'j', 'k', 'l', 'm',
			  'n', 'o', 'p', 'q', 'r', 's', 't',
			  'u', 'v', 'w', 'x', 'y', 'z',
			  'A', 'B', 'C', 'D', 'E', 'F', 'G',
			  'H', 'I', 'J', 'K', 'L', 'M',
			  'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			  'U', 'V', 'W', 'X', 'Y', 'Z'};

	char rot13[52] = {'n', 'o', 'p', 'q', 'r', 's',
			  't', 'u', 'v', 'w', 'x', 'y', 'z',
			  'a', 'b', 'c', 'd', 'e', 'f',
			  'g', 'h', 'i', 'j', 'k', 'l', 'm',
			  'N', 'O', 'P', 'Q', 'R', 'S',
			  'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			  'A', 'B', 'C', 'D', 'E', 'F',
			  'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	for (index = 0; s[index] != '\0'; index++)
	{
		for (alpha_index = 0; alpha_index <= 51; alpha_index++)
		{
			if (s[index] == alpha[alpha_index])
			{
				s[index] = rot13[alpha_index];
				break;
		}
		}
	}

	return (s);
}
