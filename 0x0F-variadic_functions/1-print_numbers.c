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
	if (separator != NULL && n > 0)
	{
		unsigned int index;
		va_list numbers;

		va_start(numbers, n);

		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(numbers, int));
			if (index != (n - 1))
				printf("%s", separator);
		}
		putchar('\n');
		va_end(numbers);
	}
}
