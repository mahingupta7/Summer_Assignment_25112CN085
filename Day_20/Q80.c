#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Calculate column-wise sum
    for (j = 0; j < c; j++) {
        sum = 0;
        for (i = 0; i < r; i++)
            sum += a[i][j];
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}
