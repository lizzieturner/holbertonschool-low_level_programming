#include "holberton.h"

/**
 * _memcpy - copies memore area
 * @dest: destination memory area (to be copied to)
 * @src: source memore area (to copy)
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
