#include "holberton.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 */

void more_numbers(void)
{
	int x = 1;
	int num = 0;
	int a = 0;
	int b = 0;

	while (x <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num < 10)
			{
				b = num;
			}
			else
			{
				a = num / 10;
				b = num % 10;

				_putchar(a + '0');
			}
			_putchar(b + '0');
			num++;
		}
		_putchar('\n');
		x++;
	}
}
