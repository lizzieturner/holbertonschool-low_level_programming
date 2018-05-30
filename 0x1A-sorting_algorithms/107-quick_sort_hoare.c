#include "sort.h"

/**
 * quick_sort_hoare - sorts array using quicksort with hoare partitioning
 * @array: array to sort
 * @size: size of array
 */

void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qsh(array, 0, size - 1, size);
}

/**
 * qsh - recursively implements quicksort using hoare method
 * @array: array to sort
 * @start: start index
 * @end: end index
 * @size: size of array
 */

void qsh(int *array, ssize_t start, ssize_t end, size_t size)
{
	ssize_t p_i;

	if (start < end)
	{
		p_i = partition_h(array, start, end, size);
		qsh(array, start, p_i - 1, size);
		qsh(array, p_i, end, size);
	}
}


/**
 * partition_h - partitions array into two subarrays using hoare method
 * @array: array to partition
 * @start: start index
 * @end: end index
 * @size: size of array
 *
 * Return: partition index
 */

ssize_t partition_h(int *array, ssize_t start, ssize_t end, size_t size)
{
	ssize_t left, right;
	int pivot;

	pivot = array[end];
	left = start - 1;
	right = end + 1;
	while (1)
	{
		do {
			left++;
		} while (array[left] < pivot);
		do {
			right--;
		} while (array[right] > pivot);
		if (left >= right)
			return (left);
		swap(&array[left], &array[right]);
		print_array(array, size);
	}
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
