#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
