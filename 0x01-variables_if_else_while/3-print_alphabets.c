#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	char low;
	char up;

	low = 'a';
	up = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	putchar('\n');

	return (0);
}
