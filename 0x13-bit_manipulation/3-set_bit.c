#include "holberton.h"

/**
 * set_bit - sets value of bit at given index to 1
 * @n: binary number
 * @index: postition to set bit value to 1
 *
 * Return: 1 if success, -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_set = 1;

	if (n == NULL || index > sizeof(unsigned long int) * 8)
		return (-1);

	bit_set = 1 << index;
	*n = *n | bit_set;

	return (1);
}
