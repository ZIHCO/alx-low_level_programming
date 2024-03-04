#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 diagonal
 * @a: pointer
 * @size: integer
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int k = 0;
	int j = size - 1;
	int sum_top_right = 0;
	int sum_top_left = 0;

	for (i = 0; i < size; i++)
	{
		sum_top_left += *(a + k);
		sum_top_right += *(a + j);
		k += size + 1;
		j += size - 1;
	}
	printf("%d, %d\n", sum_top_left, sum_top_right);
}
