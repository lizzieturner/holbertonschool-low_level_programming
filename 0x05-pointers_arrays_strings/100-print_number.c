#include "holberton.h"

/**
 * function -
 * @:
 *
 * Return:
 */

void print_number(int n)
{
	int digit_1, digit_2, digit_3, digit_4, digit_5;
	int digit_6, digit_7, digit_8, digit_9, digit_10;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	digit_1 = (n / 1000000000) % 10;
	digit_2 = (n / 100000000) % 10;
	digit_3 = (n / 10000000) % 10;
	digit_4 = (n / 1000000) % 10;
	digit_5 = (n / 100000) % 10;
	digit_6 = (n / 10000) % 10;
	digit_7 = (n / 1000) % 10;
	digit_8 = (n / 100) % 10;
	digit_9 = (n / 10) % 10;
	digit_10 = n % 10;


	if (digit_1 != 0)
		_putchar(digit_1 + '0');
	if (digit_2 != 0)
                _putchar(digit_2 + '0');
	if (digit_3 != 0)
                _putchar(digit_3 + '0');
	if (digit_4 != 0)
                _putchar(digit_4 + '0');
	if (digit_5 != 0)
                _putchar(digit_5 + '0');
	if (digit_6 != 0)
                _putchar(digit_6 + '0');
	if (digit_7 != 0)
                _putchar(digit_7 + '0');
	if (digit_8 != 0)
                _putchar(digit_8 + '0');
	if (digit_9 != 0)
                _putchar(digit_9 + '0');

	_putchar(digit_10 + '0');
}
