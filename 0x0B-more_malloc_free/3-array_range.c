#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints an array consisting of a range of integers
 * @min: lowest number in array
 * @max: highest number in array
 *
 * Return: pointer to new array, null if function fails
 */

int *array_range(int min, int max)
{
	int *new_array;
	int length, index;
	int num = min;

	if (min > max)
		return (NULL);

	length  = (max - min) + 1;

	new_array = malloc(length * sizeof(int));

	for (index = num; index <= length; index++)
	{
		new_array[index] = num;
		num++;
	}

	return (new_array);
}
