#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the diagonals of a
 * square matrix of integers
 * @a: matrix
 * @size: size each side of matrix
 */

void print_diagsums(int *a, int size)
{
	unsigned int sum_a, sum_b;
	int index_a = 1;
	int index_b = 0;

	while (index_a <= size)
	{
		sum_a += a[(size - 1) * index_a];
		index_a++;
	}

	while (index_b < size)
	{
		sum_b += a[(size + 1) * index_b];
		index_b++;
	}

	printf("%u, %u\n", sum_b, sum_a);
}
