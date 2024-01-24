#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, j in enumerate(grid):
        for k, v in enumerate(r):
            if v == 1:
                if i == 0 or grid[i - 1][k] != 1:
                    c += 1
                if k == 0 or grid[i][k - 1] != 1:
                    c += 1
                if k == width or grid[i][k + 1] != 1:
                    c += 1
                if i == length or grid[i + 1][k] != 1:
                    c += 1
    return c
