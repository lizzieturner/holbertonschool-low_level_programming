#include "holberton.h"

/**
 * _strncat - concatenates n bytes of string src to string dest
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 *
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	while (src_index < n && src[src_index] != '\0')
	{
		*(dest + dest_index) = *(src + src_index);
		dest_index++;
		src_index++;
	}

	return (dest);
}
