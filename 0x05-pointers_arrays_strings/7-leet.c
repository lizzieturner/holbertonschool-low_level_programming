#include "holberton.h"

/**
 * leet - translates string to leet
 * @s: string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	int index, reg_index;

	char reg[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (index = 0; s[index] != '\0'; index++)
	{
		for (reg_index = 0; reg_index <= 10; reg_index++)
		{
			if (s[index] == reg[reg_index])
			s[index] = leet[reg_index];
		}
	}

	return (s);
}
