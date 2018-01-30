#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: string
 */

void puts_half(char *str)
{

	int length = 0;
	int start_half = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		start_half = (length / 2);

	else
		start_half = (length - ((length - 1) / 2));

	while (start_half <= length)
	{
		_putchar(*(str + start_half));
		start_half++;
	}

	_putchar('\n');
}
