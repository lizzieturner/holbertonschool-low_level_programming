#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, follwed by a new line
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int number = 1;

	while (number < 11)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		number++;
	}
}
