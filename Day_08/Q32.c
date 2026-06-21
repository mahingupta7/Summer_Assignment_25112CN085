#include <stdio.h>

int main() {
    int n, i, j;

    // Ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(i = 1; i <= n; i++) {
        // Inner loop prints the current number 'i' exactly 'i' times
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
