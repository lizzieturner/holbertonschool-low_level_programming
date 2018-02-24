#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list strings;
	char *current;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (index = 0; index <  n - 1; index++)
	{
		current = va_arg(strings, char *);

		if (current != NULL)
			printf("%s%s", current, separator);
	}

	current = va_arg(strings, char *);

	if (current != NULL)
		printf("%s\n", current);

	va_end(strings);
}
