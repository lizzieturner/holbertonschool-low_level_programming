#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int sum_a = 0;
	int sum_b = 0;

	while (a * 3 < 1024)
	{
		sum_a = sum_a + (a * 3);
		a++;
	}
	while (b * 5 < 1024)
	{
		sum_b = sum_b + (b * 3);
		b++;
	}

	printf("%d\n", sum_a + sum_b);

	return (0);
}
