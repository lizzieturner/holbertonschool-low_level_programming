#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: size of array
 * @cmp: search function
 *
 * Return: index of found integer, -1 if size is 0 or integer not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
