#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an pointer to an array of 8 char
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][j]; i++)
	{
		for (j = 1; a[i][j]; j++)
		{
			_putchar(a[i][j - 1]);
			if (j % 8 == 0)
				_putchar('\n');
		}
	}
	_putchar(a[i - 1][j - 1]);
	_putchar('\n');
}
