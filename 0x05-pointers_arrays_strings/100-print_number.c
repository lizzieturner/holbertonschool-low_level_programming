#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int digit, sum, last;
	int divis = 1000000000;
	unsigned int num;

	num = n;
	sum = 0;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}

	while (divis > 1)
	{
		digit = (num / divis) % 10;
		sum += digit;
		if (sum != 0)
			_putchar(digit + '0');
		divis = divis / 10;
	}

	last = num % 10;
	_putchar(last + '0');
}
