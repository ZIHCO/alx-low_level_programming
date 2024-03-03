#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an pointer to an array of 8 char
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; *(a + i); i++)
	{
		for (j = 0; *(a + i)[j]; j++)
			_putchar(*(a + i)[j]);
	}
}
