#!/usr/bin/python3
"""Island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or (i != 0 and grid[i-1][j] == 0):
                    p += 1
                if i == len(grid) - 1 or (i != (len(grid) - 1) and
                                          grid[i+1][j] == 0):
                    p += 1
                if j == 0 or (j != 0 and grid[i][j-1] == 0):
                    p += 1
                if j == len(grid[i]) - 1 or (j != (len(grid[i]) - 1) and
                                             grid[i][j+1] == 0):
                    p += 1
    return p
