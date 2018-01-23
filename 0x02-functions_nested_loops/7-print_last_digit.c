#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 * @num: number
 *
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	int last = _abs(num % 10);

	_putchar(last + '0');

	return (last);
}
