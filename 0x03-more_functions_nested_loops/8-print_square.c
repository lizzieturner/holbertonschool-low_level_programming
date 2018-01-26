#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of square
 */

void print_square(int size)
{
	int line;
	int hash;

	if (size <= 0)
		_putchar('\n');

	for (line = 0; line < size; line++)
	{
		for (hash = 0; hash < size; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
