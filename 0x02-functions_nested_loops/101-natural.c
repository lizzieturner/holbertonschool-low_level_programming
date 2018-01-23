#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int a = 0;
	int sum_a = 0;
	int sum_b = 0;
	int total = 0;

	while (a * 3 < 1024)
	{
		sum_a += a * 3;
		a++;
	}
	while (a * 5 < 1024)
	{
		sum_b += a * 5;
		a++;
	}

	total = sum_a + sum_b;
	printf("%d\n", total);

	return (0);
}
