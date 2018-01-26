#include "holberton.h"

/**
 * print_diagonal - draw a straight line in the terminal
 * @n: length of line
 */

void print_diagonal(int n)
{
	int x;
	int y;


	if (n <= 0)
		_putchar('\n');

	for (x = 1; x <= n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
