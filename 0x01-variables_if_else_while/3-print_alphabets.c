#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	char up;
	char low;

	up = 'A';
	low = 'a';

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	putchar('\n');

	return (0);
}
