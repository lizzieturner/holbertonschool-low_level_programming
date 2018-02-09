#include <stdio.h>

int main(int argc, char *argv[])
{
	if (*argv != '\0')
		printf("%d\n", argc);

	return (0);
}
