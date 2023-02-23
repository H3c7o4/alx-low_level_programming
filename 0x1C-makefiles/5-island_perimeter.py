#!/usr/bin/python3


def island_perimeter(grid):
    """ Function that returns the perimeter
    of the island described in grid
    """
    p = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                p += 1
            else:
                pass
    return p * 2 + 2
