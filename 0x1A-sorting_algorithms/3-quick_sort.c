#include "sort.h"

/**
 * quick_sort - the quicksort algorithm
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - recursively implements quicksort
 * @array: array to sort
 * @start: start index
 * @end: end index
 * @size: size of array
 */

void quicksort(int *array, ssize_t start, ssize_t end, size_t size)
{
	ssize_t p_i;

	if (start < end)
	{
		p_i = partition(array, start, end, size);
		quicksort(array, start, p_i - 1, size);
		quicksort(array, p_i + 1, end, size);
	}
}


/**
 * partition - partitions array into two subarrays
 * @array: array to partition
 * @start: start index
 * @end: end index
 * @size: size of array
 *
 * Return: partition index
 */

ssize_t partition(int *array, ssize_t start, ssize_t end, size_t size)
{
	ssize_t p_i, j;
	int pivot;

	p_i = start - 1;
	pivot = array[end];
	for (j = start; j <= end - 1; j++)
	{
		if (array[j] <= pivot)
		{
			p_i++;
			if (p_i != j)
			{
				swap(&array[p_i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[end] < array[p_i + 1])
	{
		swap(&array[end], &array[p_i + 1]);
		print_array(array, size);
	}
	return (p_i + 1);
}

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
