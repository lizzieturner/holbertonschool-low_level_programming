#include <stdio.h>
#include <float.h>

/**
 * main - entry point in c
 *
 * Return: 0 if successful
 */

int main(void)
{
	long double a = 1;
	long double b = 2;
	int n = 3;

	printf("%0.21Le, ", a);
	printf("%0.21Le, ", b);

	while (n < 98)
	{
		long double fib = a + b;

		printf("%0.21Le, ", fib);
		a = b;
		b = fib;
		n++;
	}

	while (n == 98)
	{
		long double fib = a + b;

		printf("%0.21Le\n", fib);
		a = b;
		b = fib;
		n++;
	}

	return (0);
}
