#include <stdio.h>

/**
 * *_strcpy- copies a string to a new buffer
 * @dest: destination for string
 * @src: source string
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int x;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (x = 0; x <= length; x++)
	{
		*(dest + x) = *(src + x);

	}

	return (dest);
}
