#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to free
 * @height: the number of rows
 * Description: Note that we will compile with your
 * alloc_grid.c
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
