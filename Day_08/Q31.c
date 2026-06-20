#include <stdio.h>

int main() {
    int n, i, j;

    // Ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(i = 1; i <= n; i++) {
        // Inner loop prints characters from A up to ith character
        for(j = 1; j <= i; j++) {
            printf("%c", 64 + j); // 65 = 'A', so 64+j gives A, B, C...
        }
        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
