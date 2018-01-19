#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a = 48;
	int b = 48;

	while (a <= 57)
	{
		b = (a + 1);
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a < 56 || b < 57)
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
