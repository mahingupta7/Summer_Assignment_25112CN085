#include <stdio.h>

int main() {
    int n, i, j, matrix[10][10], flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Check symmetry: matrix[i][j] == matrix[j][i]
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (matrix[i][j] != matrix[j][i])
                flag = 0;

    if (flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
