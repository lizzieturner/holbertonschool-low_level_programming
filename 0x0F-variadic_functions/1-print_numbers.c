#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int index;
		va_list numbers;

		if (separator == NULL)
			separator = "";

		va_start(numbers, n);

		for (index = 0; index < (n - 1); index++)
			printf("%d%s", va_arg(numbers, int), separator);

		printf("%d\n", va_arg(numbers, int));
		va_end(numbers);
	}
}
