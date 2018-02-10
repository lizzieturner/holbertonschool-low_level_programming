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
	int cash;
 	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = atoi(argv[1]);

	if (cash < 0)
		printf("0\n");

	while (cash > 0)
	{
		while (cash >= 25)
		{
			cash -= 25;
			count++;
		}

		while (cash >= 10)
		{
			cash -= 10;
			count++;
		}

		while (cash >= 5)
		{
			cash -= 5;
			count++;
		}

		while (cash >= 1)
		{
			cash -= 1;
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}
