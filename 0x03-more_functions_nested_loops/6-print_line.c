#include "holberton.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: length of line
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
