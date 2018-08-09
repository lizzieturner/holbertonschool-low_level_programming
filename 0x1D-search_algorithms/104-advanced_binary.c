#include "search_algos.h"

/**
 * advanced_binary - searchs for a value using binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index value is at, or -1 on failure
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array)
	{
		return (rec_bin_adv(array, 0, size - 1, value));
	}
	return (-1);
}


/**
 * rec_bin_adv - recursively searched for a value using binary search
 * @array: array to search in
 * @left: starting index
 * @right: ending index
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int rec_bin_adv(int *array, size_t left, size_t right, int value)
{

	int mid = left + (right - left) / 2;

	print_binary(array, left, right);
	if (value == array[mid] && value != array[mid - 1])
		return (mid);
	if (right >= left)
	{
		if (array[mid] >= value)
			return (rec_bin_adv(array, left, mid, value));
		return (rec_bin_adv(array, mid + 1, right, value));
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
