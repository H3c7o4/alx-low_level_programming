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


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
