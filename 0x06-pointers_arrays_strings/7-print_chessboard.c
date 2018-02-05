#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array that contains the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int row, column;
	char cell;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			cell = a[row][column];
			_putchar(cell);
		}
	_putchar('\n');
	}
}
