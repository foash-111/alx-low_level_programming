#!/usr/bin/python3
"""module for porblem solving """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    area = 0
    count = 0
    flag = 0
    sub = 0
    temp = 0
    """grid length and width doesnt exced 100"""
    if len(grid) == 100 or (i for i in grid) == 100:
        return 0
    for i in range(len(grid)):
        for m in range(len(grid[i])):
            if grid[i][m] == 1:
                count += 1
            if grid[i - 1][m] == 1 and grid[i][m] == 1:
                sub += 1
        if flag == 1:
            if count > 0:
                area += count * 4
                if area > 4:
                    area -= ((count - 1) * 2)
        if flag == 0:
            if count > 0:
                area += count * 4
                if area > 4:
                    area -= ((count - 1) * 2)
                flag = 1
                
        count = 0
        temp += area
        temp -= sub * 2
        area = 0
        sub = 0
    return temp

grid = [
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 0, 0, 0],
        [0, 1, 1, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
print(island_perimeter(grid))
