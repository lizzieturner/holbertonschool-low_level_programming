#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a;
	int b;
	int comma;
	int space;
	int end;

	a = 48;
	b = 48;
	comma = 44;
	space = 32;
	end = 10;

	while (a <= 57 && b <= 57)
	{
		putchar(a);
		putchar(b);

		if (a < 57 || b < 57)
		{
			putchar(comma);
			putchar(space);

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
			putchar(end);
		}
	}

	return (0);
}
