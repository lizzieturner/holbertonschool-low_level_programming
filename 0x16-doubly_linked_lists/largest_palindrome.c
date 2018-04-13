#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(int num)
{
	char str[7];

	sprintf(str, "%d", num);
	if (str[0] == str[5] && str[1] == str[4] && str[2] == str[3])
		return (1);

	return (0);
}


int main(void)
{
	int a, b, product = 0;

	for (a = 999; a > 0; a--)
	{
		for (b = 999; b > 900; b--)
		{
			product = a * b;
			if (check(product) == 1)
			{
				printf("%d * % d = [%d]\n", a, b, product);
				return (0);
			}
		}
	}

	printf("no palindromes found :(\n");
	return (-1);
}
