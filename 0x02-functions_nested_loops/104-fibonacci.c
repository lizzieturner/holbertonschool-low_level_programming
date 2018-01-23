#include <stdio.h>

/**
 * main - entry point in c
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int n = 3;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (n < 98)
	{
		unsigned long fib = a + b;

		printf("%lu, ", fib);

		a = b;
		b = fib;

		n++;
	}

	while (n == 98)
	{
		unsigned long fib = a + b;

		printf("%lu\n", fib);
		a = b;
		b = fib;
		n++;
	}

	return (0);
}
