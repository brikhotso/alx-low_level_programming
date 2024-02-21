#!/usr/bin/python3
"""
contains method for returning perimeter of an island
"""


def island_perimeter(grid):
    """
    define island perimeter described in grid

    grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically
        - Grid is rectangular, width and height don’t exceed 100
    """
    count = 0

    len_rows = len(grid)
    len_cols = len(grid[0])
    rows = len(grid) - 1
    cols = len(grid[0]) - 1

    for i in range(len_rows):
        for j in range(len_cols):
            if grid[i][j] == 1:
                if (j == 0 or grid[i][j - 1] == 0):
                    count += 1
                if (j == cols or grid[i][j + 1] == 0):
                    count += 1
                if (i == 0 or grid[i - 1][j] == 0):
                    count += 1
                if (i == rows or grid[i + 1][j] == 0):
                    count += 1
    return count
