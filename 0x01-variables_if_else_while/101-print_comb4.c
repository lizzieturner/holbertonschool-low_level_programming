#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;

	while (a <= 57)
	{
		b = (a + 1);
		while (b <= 57)
		{
			c = (b + 1);
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 55 || b < 56 || c < 57)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
