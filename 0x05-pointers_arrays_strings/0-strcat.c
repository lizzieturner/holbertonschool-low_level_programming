#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	while (src[src_index] != '\0')
	{
		*(dest + dest_index) = *(src + src_index);
		dest_index++;
		src_index++;
	}

	return (dest);
}
