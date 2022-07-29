#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: number of columns
 * @height: number of rows
 * Return: NULL on failure, or a pointer
 * Description: Each element of the grid should be
 * initialized to 0.
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pa;

	if (width <= 0 || height <= 0)
		return (NULL);
	pa = malloc(sizeof(int *) * height);
	if (pa == NULL)
	{
		free(pa);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pa[i] = malloc(sizeof(int) * width);
		if (pa[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(pa[j]);
			}
			free(pa);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pa[i][j] = 0;
		}
	}
	return (pa);
}
