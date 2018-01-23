#include "holberton.h"

/**
 * print_times_table - print times tables from zero to n
 * @n: integer
 */

void print_times_table(int n)
{
	int a = 0;
	int b = 1;

	if (n > 0 && n < 16)
	{
		while (a <= n)
		{
			_putchar('0');
			b = 1;
			while (b <= n)
			{
				int p = a * b;

				_putchar(',');
				_putchar(' ');
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p > 99)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
