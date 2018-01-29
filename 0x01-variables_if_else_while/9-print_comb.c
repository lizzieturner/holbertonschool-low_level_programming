#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a;
	int comma;
	int space;
	int end;

	a = 48;
	comma = 44;
	space = 32;
	end = '\n';

	while (a <= 57)
	{

		putchar(a);

		if (a < 57)
		{
			a++;
			putchar(comma);
			putchar(space);
		}

		else
		{
			a++;
		}
	}

	putchar(end);

	return (0);
}
