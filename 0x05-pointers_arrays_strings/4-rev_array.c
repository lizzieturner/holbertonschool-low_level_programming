#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int index, placeholder;

	placeholder = 0;
	n--;
	for (index = 0; index < n; index++)
	{
		placeholder = a[n];
		a[n] = a[index];
		a[index] = placeholder;
		n--;
	}
}
