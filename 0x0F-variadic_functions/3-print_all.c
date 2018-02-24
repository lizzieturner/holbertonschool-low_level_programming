#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints any type of argument
 * @format: type of argument (char, int, float, char *)
 */

void print_all(const char * const format, ...)
{
	int f_i, c_i;
	va_list list;
	char *separator = "";

	type check_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);
	f_i = 0;
	while (format[f_i] != '\0')
	{
		c_i = 0;
		while (check_type[c_i].c != NULL)
		{
			if (format[f_i] == *check_type[c_i].c)
			{
				printf("%s", separator);
				check_type[c_i].f(list);
				separator = ", ";
			}
			c_i++;
		}
		f_i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_char - prints an argument of type char
 * @list: argument to print
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an argument of type int
 * @list: argument to print
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints an argument of type float
 * @list: argument to print
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints an argument of type char *
 * @list: argument to print
 */

void print_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
