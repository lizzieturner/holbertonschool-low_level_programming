#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurence of the character
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] != '\0'; index++)
		if (s[index] == c)
			s = &s[index];

	return (s);
}
