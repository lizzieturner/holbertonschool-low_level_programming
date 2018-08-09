#include "search_algos.h"

/**
 * linear_search - searchs for a value using linear search algorithm
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%lu] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
