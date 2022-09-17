#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: a pointer to an array of integers
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;
	int k = 0;

	if (max >= min)
	{
		arr = malloc(sizeof(int) * (max - min + 1));
		if (arr == NULL)
			return (NULL);
		for (i = min; i <= max; i++)
		{
			arr[k] = i;
			k++;
		}
	}
	return (arr);
}
