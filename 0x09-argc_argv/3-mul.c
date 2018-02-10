#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point function
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
}
