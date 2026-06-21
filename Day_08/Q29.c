#include <stdio.h>

int main() {
    int n, i, j;
    
    // Ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    // Outer loop for rows
    for(i = 1; i <= n; i++) {
        // Inner loop for stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to next line after printing stars
        printf("\n");
    }
    
    return 0;
}
