#include "holberton.h"

/**
 * _puts_recursion - print a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
		_puts_recursion(s + 1);

	else
		_putchar('\n');
}
