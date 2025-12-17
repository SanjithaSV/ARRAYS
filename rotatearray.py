def rotate_matrix_in_place(matrix):
    n = len(matrix)
    if n == 0:
        return

    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

    for i in range(n):
        matrix[i].reverse()

def solve():
    try:
        n_line = input()
        if not n_line.strip():
            return
        n = int(n_line.strip())
    except EOFError:
        return
    except ValueError:
        return

    matrix = []
    for _ in range(n):
        try:
            row_line = input()
            row = list(map(int, row_line.split()))
            matrix.append(row)
        except EOFError:
            break

    rotate_matrix_in_place(matrix)

    for row in matrix:
        print(' '.join(map(str, row)))

solve()
