#include "sort.h"

/**
 * selection_sort - the selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t small, i, j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}
		if (small != i)
		{
			tmp = array[i];
			array[i] = array[small];
			array[small] = tmp;
			print_array(array, size);
		}
	}
}
