#!/usr/bin/python3
""" Defines function island_perimeter """


def island_perimeter(grid):
    """
    Returns the perineter of an island based on grid
    Args:
    @grid - a list of integers where:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(height):
        for j in range(width):
            if (grid[i][j] == 1):
                if (i == 0 or grid[i - 1][j] == 0):
                    perimeter += 1
                if (j == 0 or grid[i][j - 1] == 0):
                    perimeter += 1
    return (perimeter * 2)
