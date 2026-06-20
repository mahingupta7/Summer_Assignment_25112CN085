#include <stdio.h>

int main() {
    int n, i, j;
    
    // Ask user for size of square
    printf("Enter size of square: ");
    scanf("%d", &n);
    
    // Outer loop for rows
    for(i = 1; i <= n; i++) {
        // Inner loop for columns
        for(j = 1; j <= n; j++) {
            // Print star for first/last row OR first/last column
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" "); // Print space inside the square
            }
        }
        // Move to next line after each row
        printf("\n");
    }
    
    return 0;
}
