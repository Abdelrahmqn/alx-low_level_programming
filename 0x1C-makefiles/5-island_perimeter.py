#!/usr/bin/python3
"""define a function """


def island_perimeter(grid):
    """finds the grid"""

    edges = 0
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    the_grid = perimeter * 4 - edges * 2
    return the_grid
