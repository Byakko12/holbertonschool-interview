#!/usr/bin/python3
"""
0x16 - Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    ilen = len(matrix[0])
    jlen = len(matrix)
    rotated = []

    for i in range(ilen):
        rotated.append([])
        for j in range(jlen):
            rotated[i].append(matrix[jlen - 1 - j][i])

    for i in range(jlen):
        for j in range(jlen):
            matrix[i][j] = rotated[i][j]
