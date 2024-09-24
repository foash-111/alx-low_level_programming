#!/usr/bin/python3
"""Find island perimeter"""


def island_perimeter(grid):
    """Find island perimeter"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:  # If it's a land cell
                # Start by adding 4 for this cell's perimeter
                perimeter += 4

                # Check the cell above (i-1, j)
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2  # Subtract 2 for the shared side

                # Check the cell to the left (i, j-1)
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2  # Subtract 2 for the shared side

    return perimeter
