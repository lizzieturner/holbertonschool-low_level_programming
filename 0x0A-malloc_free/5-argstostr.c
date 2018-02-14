#include "holberton.h"

/**
 * argstostr - concatenate all arguments of a program
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: pointer to string containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure
 */

char *argstostr(int ac, char **av)
{
	char *arg_string;
	int string_size = 0;
	int i1, i2;
	int i3 = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
			string_size++;

		string_size++;
	}

	string_size++;

	arg_string = malloc(string_size * sizeof(char));

	if (arg_string == NULL)
		return (NULL);

	for (i1 = 0; i1 < argc; i1++)
	{
		for (i2 = 0; argv[i1][i2]; i2++)
		{
			arg_string[i3] = argv[i1][i2];
			i3++;
		}
	}

	arg_string[i3] = '\0';

	return (arg_string);
}
