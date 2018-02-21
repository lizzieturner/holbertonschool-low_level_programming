#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
		action(array[index]);
}
