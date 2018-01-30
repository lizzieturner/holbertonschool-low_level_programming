#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string
 */

void puts2(char *str)
{

	int length = 0;

	while (*(str + length) != '\0')
	{
		if (length % 2 == 0)
			_putchar(*(str + length));
		length++;
	}

	_putchar('\n');
}
