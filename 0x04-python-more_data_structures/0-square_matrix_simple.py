#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    """
    wordA formula for calculating the square
    the sum of a matrix's integer values.
    """
    b_matrix = []
    for b in matrix:
        res = list(map(lambda x: x**2, b))
        b_matrix.append(res)
    return b_matrix
