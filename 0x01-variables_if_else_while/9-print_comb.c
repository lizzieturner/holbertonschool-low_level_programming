#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int a;
	char comma;
	char space;
	char end;

	a = 48;
	comma = ',';
	space = ' ';
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
