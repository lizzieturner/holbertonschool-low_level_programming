#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: arguments
 *
 * Return: sum of arguments, 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, index;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (index = 0; index < n; index++)
		sum += va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
