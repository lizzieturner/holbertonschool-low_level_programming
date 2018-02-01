#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int length, end, start, placeholder;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	length--;
	end = length;
	start = 0;
	placeholder = 0;

	while (end >= start)
	{
		placeholder = *(s + end);
		*(s + end) = *(s + start);
		*(s + start) = placeholder;

		end--;
		start++;
	}
}
