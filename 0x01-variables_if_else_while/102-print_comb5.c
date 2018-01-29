#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a = 0;
	int b = 0;

	while (a <= 99)
	{
		b = (a + 1);
		while (b <= 99)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
			b++;
		}
		a++;
	}
	return (0);
}
