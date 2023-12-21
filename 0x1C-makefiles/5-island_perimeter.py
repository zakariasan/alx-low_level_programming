#!/usr/bin/python3
"""
Technical interview preparation:
Island Perimeter
"""


def island_perimeter(grid):
    """
    a function def island_perimeter(grid): that returns the perimeter of the
    island described in grid:
    """
    def is_valid(i, j):
        return 0 <= i < len(grid) and 0 <= j < len(grid[0])

    edges = 0
    size = 0

    for i in range(len(grid[0])):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                size += 1
                edges += is_valid(i, j - 1) and grid[i][j - 1] == 1
                edges += is_valid(i - 1, j) and grid[i - 1][j] == 1

    return size * 4 - edges * 2
