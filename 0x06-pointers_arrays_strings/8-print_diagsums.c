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
	int sum_1 = 0;
	int sum_2 = 0;
	int index_1 = 1;
	int index_2 = 0;

	while (index_1 < size)
	{
		sum_1 += a[(size + 1) * index_1];
		index_1++;
	}

	while (index_2 <= size)
	{
		sum_2 += a[(size - 1) * index_2];
		index_2++;
	}

	printf("%i, %i\n", sum_1, sum_2);
}
