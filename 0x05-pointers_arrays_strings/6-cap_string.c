#include "holberton.h"

/**
 * cap_string - capitalizes each word in a string
 * @s: string
 *
 * Return: pointer to string
 */


char *cap_string(char *s)
{
	int index, special_index;

	char special[13] = {',', ';', '.', '!', '?', '"',
			    '(', ')', '{', '}', ' ', '\t', '\n'};

	for (index = 0; s[index] != '\0'; index++)
	{
		for (special_index = 0; special_index < 12; special_index++)
		{
			while (s[index] == special[special_index])
			{
				index++;
				if (s[index] >= 'a' && s[index] <= 'z')
				{
					s[index] -= 32;
				}
			}
		}
	}

	return (s);
}
