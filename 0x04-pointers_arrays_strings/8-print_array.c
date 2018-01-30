#include <stdio.h>

/**
 * print_array - print a certain number of elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
	       		printf("%d, ", a[x]);
		else
			printf("%d\n", a[x]);
	}
}
