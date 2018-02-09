#include <stdio.h>

/**
 * main - entry point function
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; argv[index] != '\0' && argc > 0; index++)
		printf("%s\n", argv[index]);

	return (0);
}
