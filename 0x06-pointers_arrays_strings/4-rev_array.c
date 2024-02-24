#include "main.h"

/**
 * reverse_array - reverses the contentof an array of integers
 * @a: pointer to an integer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = n / 2;
	int count = 0;
	int temp;

	while (i > 0)
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;
		count++;
		i--;
	}
}
