#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long test, num;

	num = 612852475143;

	for (test = 3; test < num; test++)
	{
		if (num % test == 0)
			num /= test;
	}

	printf("%lu\n", num);
}
