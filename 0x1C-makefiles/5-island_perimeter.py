#!/usr/bin/python3

"""
Module for Island Perimeter
"""


def island_perimeter(grid):
    """
    island_perimeter function calculates the perimeter of the island
    described in the grid.

    Parameters:
    - grid: List of lists of integers representing the island.
            0 represents a water zone.
            1 represents a land zone.

    Returns:
    - Perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter

