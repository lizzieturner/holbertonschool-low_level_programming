#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}

	_putchar('\n');
}
