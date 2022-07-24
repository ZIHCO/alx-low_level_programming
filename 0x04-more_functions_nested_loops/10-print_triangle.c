#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: an int argument
 * Description: Where size is the size of the triangle.
 * If size is 0 or less, the function should print
 * only a new line.
 * Use the character # to print the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
