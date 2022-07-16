#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: an array of integers
 * @n: the number of element to print
 * Description: where n is the number of elements of the array to be printed.
 * Numbers must be separated by comma, followed by a space.
 * The numbers should be displayed in the same order as they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
