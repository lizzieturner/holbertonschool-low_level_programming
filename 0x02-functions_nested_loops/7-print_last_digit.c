#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 * @num: number
 *
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last >= 0)
	{
		_putchar(last + '0');
		return (last);
	}

	else
	{
		_putchar(-last + '0');
		return (-last);
	}
}
