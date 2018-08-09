#include "search_algos.h"

/**
 * binary_search - searchs for a value using binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index value is at, or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		return (recursive_binary(array, 0, size - 1, value));
	}
	return (-1);
}


/**
 * recursive_binary - recursively searched for a value using binary search
 * @array: array to search in
 * @left: starting index
 * @right: ending index
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int recursive_binary(int *array, size_t left, size_t right, int value)
{

	int mid = left + (right - left) / 2;

	print_binary(array, left, right);
	if (array[mid] == value)
		return (mid);
	if (right >= left)
	{
		if (array[mid] > value)
			return (recursive_binary(array, left, mid - 1, value));
		return (recursive_binary(array, mid + 1, right, value));
	}
	return (-1);
}


/**
 * print_binary - prints array with every call of recursive_binary
 * @array: array to print
 * @left: starting index
 * @right: ending index
 */

void print_binary(int *array, size_t left, size_t right)
{
	if (left > right)
		return;
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%u, ", array[left]);
		left++;
	}
	printf("%u\n", array[left]);
}
