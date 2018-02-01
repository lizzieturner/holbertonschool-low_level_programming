#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 *
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int index;

	while (*(s + index) != '\0')
	{
		if (*(s + index) >= 'a' && *(s + index) <= 'z')
			*(s + index) -= 32;
		index++;
	}

	return (s);
}
