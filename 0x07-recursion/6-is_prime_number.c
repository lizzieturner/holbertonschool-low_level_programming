#include "holberton.h"

/**
 * function -
 * @:
 *
 * Return:
 */

int _checkprime(int n, int x)
{
        if (x == 1)
                return (1);

	if (n % x == 0)
		return (0);

	return	(_checkprime(n, x - 1));
}


int is_prime_number(int n)
{
	int x = n - 1;

	if (n <= 1)
		return (0);

	return (_checkprime(n, x));
}
