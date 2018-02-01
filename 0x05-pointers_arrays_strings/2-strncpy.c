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
	int dest_index = 0;
	int src_index = 0;

	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
