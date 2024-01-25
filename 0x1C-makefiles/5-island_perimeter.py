#!/usr/bin/python3
"""Definition of island_perimeter"""


def island_perimeter(grid):
    """Returns the perimiter of an island.

    'grid' is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100

    Arguments:
        grid (list): A list of list of integers representing an island.
    Returns:
        the perimeter of the island described in grid.
    """

    wth = len(grid[0])
    hth = len(grid)
    e = 0
    s = 0

    for x in range(hth):
        for y in range(wth):
            if grid[x][y] == 1:
                s += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    e += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    e += 1
    return s * 4 - e * 2
