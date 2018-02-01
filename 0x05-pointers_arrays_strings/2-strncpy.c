#include "holberton.h"

/**
 * _strncpy - copies two strings
 * @dest: string to copt to
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for  (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
