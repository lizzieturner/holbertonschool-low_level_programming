#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int dig_1, dig_2, dig_3, dig_4, dig_5, dig_6, dig_7, dig_8, dig_9, last;
	int sum_1, sum_2, sum_3, sum_4, sum_5, sum_6, sum_7, sum_8, sum_9;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	dig_1 = (n / 1000000000) % 10; sum_1 = dig_1;
	dig_2 = (n / 100000000) % 10; sum_2 = sum_1 + dig_2;
	dig_3 = (n / 10000000) % 10; sum_3 = sum_2 + dig_3;
	dig_4 = (n / 1000000) % 10; sum_4 = sum_3 + dig_4;
	dig_5 = (n / 100000) % 10; sum_5 = sum_4 + dig_5;
	dig_6 = (n / 10000) % 10; sum_6 = sum_5 + dig_6;
	dig_7 = (n / 1000) % 10; sum_7 = sum_6 + dig_7;
	dig_8 = (n / 100) % 10; sum_8 = sum_7 + dig_8;
	dig_9 = (n / 10) % 10; sum_9 = sum_8 + dig_9;
	last = n % 10;


	if (sum_1 != 0)
		_putchar(dig_1 + '0');
	if (sum_2 != 0)
		_putchar(dig_2 + '0');
	if (sum_3 != 0)
		_putchar(dig_3 + '0');
	if (sum_4 != 0)
		_putchar(dig_4 + '0');
	if (sum_5 != 0)
		_putchar(dig_5 + '0');
	if (sum_6 != 0)
		_putchar(dig_6 + '0');
	if (sum_7 != 0)
		_putchar(dig_7 + '0');
	if (sum_8 != 0)
		_putchar(dig_8 + '0');
	if (sum_9 != 0)
		_putchar(dig_9 + '0');
	_putchar(last + '0');
}
