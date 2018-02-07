#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 *
 * Return: -1 if n is negative, value of factorial otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
