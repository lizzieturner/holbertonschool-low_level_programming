#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a = 48;
	int b = a + 1;

	while (a <= 57 && b <= 57)
	{
		putchar(a);
		putchar(b);
		if (a < 56 || b < 57)
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
				b = a + 1;
			}
		}
		else
		{
			a++;
			b++;
		}
	}
	putchar('\n');
	return (0);
}
