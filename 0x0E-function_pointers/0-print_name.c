#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
