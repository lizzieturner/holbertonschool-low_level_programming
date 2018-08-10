#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n",
		       (int)pos, array[pos]);
		if (value > array[pos])
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%d] is out of range\n",
	       (int)pos);
	return (-1);
}
