#!/usr/bin/python3
"""Island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    x_min = 0
    x_max = 0
    y_min = 0
    y_max = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if x_min == 0 or i < x_min:
                    x_min = i
                if i > x_max:
                    x_max = i
                if y_min == 0 or j < y_min:
                    y_min = j
                if j > y_max:
                    y_max = j
    if x_min == 0 and y_min == 0:
        return 0
    if x_max == x_min and x_min == y_min and y_max == y_min:
        return 1
    if x_max == x_min:
        return (y_max - y_min + 1)
    if y_max == y_min:
        return (x_max - x_min + 1)

    return (x_max - x_min + 1)*2 + (y_max - y_min + 1)*2
