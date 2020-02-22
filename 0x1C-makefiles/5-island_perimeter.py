#!/usr/bin/python3
def island_perimeter(grid):
    '''Island perimeter'''
    cnt = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                cnt += 4
                if j > 0 and grid[i][j - 1]:
                    cnt -= 2
                if i > 0 and grid[i - 1][j]:
                    cnt -= 2
    return cnt
