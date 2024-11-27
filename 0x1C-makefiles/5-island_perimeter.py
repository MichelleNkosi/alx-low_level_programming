#!/usr/bin/python3
"""
Module: 5-island_perimeter
Defines a function to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    
    Args:
        grid (list of list of int): A 2D grid where 0 represents water 
        and 1 represents land.
        
    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Start with 4 sides for each land cell
                perimeter += 4

                # Subtract sides shared with adjacent land cells
                if i > 0 and grid[i - 1][j] == 1:  # Top neighbor
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # Left neighbor
                    perimeter -= 2

    return perimeter

