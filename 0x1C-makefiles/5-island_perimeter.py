#!/usr/bin/python3

"""This module defines a single function:
        island_perimeter(grid)
"""


def island_perimeter(grid):
    """This function computes the perimeter
        of an island:
        arg:
            grid is a list of lists of 0s and 1s
            where 1 represents land and 0 water
        return:
            perimeter of the island
    """
    if type(grid) is not list:
        return
    elif type(grid) is list:
        types = [isinstance(lst, list) for lst in grid]
        if not all(types):
            return
        else:
            elements = [[d == 1 or d == 0 for d in lst] for lst in grid]
            binary = [all(lst) for lst in elements]
            if not all(binary):
                return
            else:
                perimeter = 0
                significant_row = []
                for rowIndx in range(len(grid)):
                    row = grid[rowIndx]
                    if 1 in row:
                        significant_row.append(row)
                    for colIndx in range(len(row)):
                        if row[colIndx] == 1:
                            if row[colIndx + 1] == 0 and row[colIndx - 1] == 0:
                                perimeter += 2
                            else:
                                perimeter += 2
                perimeter += 2
                return perimeter
