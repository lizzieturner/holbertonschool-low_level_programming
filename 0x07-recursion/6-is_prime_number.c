#include "holberton.h"

/**
 * _checkprime - checks for prime numbers by dividing by possible factors
 * @n: number
 * @x: possible factor
 *
 * Return: 1 if prime, 0 otherwise
 */

int _checkprime(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);

	return	(_checkprime(n, x - 1));
}

/**
 * is_prime_number - identifies prime numbers
 * @n: prime number
 *
 * Return: 1 if prime, 0 otherwise
 */


int is_prime_number(int n)
{
	int x = n - 1;

	if (n <= 1)
		return (0);

	return (_checkprime(n, x));
}
