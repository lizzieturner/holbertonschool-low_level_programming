#include "holberton.h"

/**
 * times_table - prints the 0-9 multiplication tables
 */

void times_table(void)
{
	int n = 0;
	int m = 1;

	while (n < 10)
	{
		_putchar('0');
		{
			m = 1;
			while (m < 10)
			{
				int p = m * n;

				if (p < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				m++;
			}
			_putchar('\n');
			n++;
		}
	}
}
