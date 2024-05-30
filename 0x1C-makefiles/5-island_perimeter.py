#!/usr/bin/python3

"""
    Calculates the perimeter of the island described in the grid.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (list of list of int): Represents the island grid where 1
    represents land and 0 represents water.

    Prints:
    - int: The perimeter of the island.

    Example:
    ```
    grid = [
        [0, 1, 0, 0],
        [1, 1, 1, 0],
        [0, 1, 0, 0],
        [1, 1, 0, 0]
    ]
    island_perimeter(grid)  # Output: 16
    ```
    """
    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                # Check adjacent cells
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
