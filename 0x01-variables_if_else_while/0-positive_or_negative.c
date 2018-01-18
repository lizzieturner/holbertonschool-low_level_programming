#include <stdio.h>
#include <time.h>

/**
 * main - main function in C
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
