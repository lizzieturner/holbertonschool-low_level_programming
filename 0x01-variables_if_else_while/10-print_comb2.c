#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a;
	int b;

	a = 48;
	b = 48;

	while (a <= 57 && b <= 57)
	{
		putchar(a);
		putchar(b);
		if (a < 57 || b < 57)
		{
			putchar(',');
			putchar(' ');
			if (b < 57)
			{
				b++;
			}
			else
			{
				a++;
				b = 48;
			}
		}
		else
		{
			a++;
			b++;
			putchar('\n');
		}
	}
	return (0);
}
