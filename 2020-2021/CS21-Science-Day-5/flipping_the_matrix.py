def flippingMatrix(matrix):
    n = len(matrix)
    values = []
    for i in range(n // 2):
        for j in range(n // 2):
            values.append(max(matrix[i][j], matrix[i][n - 1 - j], matrix[n - 1 - i][j], matrix[n - 1 - i][n - 1 - j]))
    return sum(values)
