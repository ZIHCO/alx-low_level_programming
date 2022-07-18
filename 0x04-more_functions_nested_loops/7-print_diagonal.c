#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal.
 * @n: takes integer argument
 * Description: Where n is the number of times the
 * character \ should be printed.
 * The line should end with a \n.
 * If n is 0 or less, the function should only print \n.
 */
void print_diagonal(int n)
{
	int k, i;

	for (k = 1; k <= n; k++)
	{
		_putchar('\\');
		if (k != n)
			_putchar('\n');
		for (i = 1; i <= k; i++)
		{
			if (n != k)
				_putchar(' ');

		}
	}
	_putchar('\n');
}
