#!/usr/bin/python3

""" Island Perimeter module """

def island_perimeter(grid):
    """ This function describe perimeter of island """
    count = 0
    for a in range(len(grid)):
        for b in range(len(grid)):
            if grid[a][b] == 1:
                count += 4
                if b > 0 and grid[a][b - 1] == 1:
                    count -= 2
                if a > 0 and grid[a - 1][b] == 1:
                    count -= 2
    return count
