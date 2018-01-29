#include <stdio.h>

/**
 * main - main function in c
 * Return: exit code (0 if no errors)
 */

int main(void)
{
	int num;
	char let;

	num = '0';
	let = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (let <= 'f')
	{
		putchar(let);
		let++;
	}

	putchar('\n');

	return (0);
}
