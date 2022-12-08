#!/usr/bin/python3
"""
5-island_perimeter module contains the
island_perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described
    grid
    """

    i = 0
    perimeter = 0
    while i < len(grid):
        j = 0
        while j < len(grid[0]):
            if grid[i][j] == 1:
                if (i - 1) >= 0 and grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) < len(grid) and grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) >= 0 and grid[i][j - 1] == 0:
                    perimeter += 1
                if (j + 1) < len(grid[0]) and grid[i][j + 1] == 0:
                    perimeter += 1
            j += 1
        i += 1
    return perimeter
