#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: value found using correct function (sum, etc)
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num;
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num = f(a, b);
	printf("%d\n", num);

	return (0);
}
