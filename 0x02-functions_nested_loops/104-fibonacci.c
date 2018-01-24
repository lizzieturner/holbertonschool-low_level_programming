#include <stdio.h>

/**
 * print_big_num - prints two number components as one number;
 * if the first part is zero, it will not print
 * @big: first number component (digits 1-10)
 * @little: second number component (digits 11-end)
 */

void print_big_num(unsigned long big, unsigned long little)
{
	if (big == 0)
	{
		printf("%lu, ", little);
	}
	else
	{
	printf("%lu%lu, ", big, little);
	}
}

/**
 * main - entry point in c
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long a_big = 0;
	unsigned long a_little = 1;
	unsigned long b_big = 0;
	unsigned long b_little = 2;
	unsigned long fib_little = 0;
	unsigned long fib_big = 0;
	int carry = 0;
	int n = 3;

	print_big_num(a_big, a_little);
	print_big_num(b_big, b_little);

	while (n < 99)
	{
		fib_little = a_little + b_little;
		fib_big = a_big + b_big;
		carry = fib_little / 10000000000;

		fib_little = fib_little % 10000000000;
		fib_big = fib_big + carry;

		print_big_num(fib_big, fib_little);

		a_big = b_big;
		b_big = fib_big;
		a_little = b_little;
		b_little = fib_little;
		n++;
	}

	putchar('\n');
	return (0);
}
