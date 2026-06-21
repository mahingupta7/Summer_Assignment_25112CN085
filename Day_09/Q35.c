#include <stdio.h>

int main() {
    int n, i, j;
    char ch;
    
    // Ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    // Outer loop for rows
    for(i = 1; i <= n; i++) {
        // Character for this row (A + i - 1)
        ch = 'A' + (i - 1);
        
        // Inner loop to print character i times
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        // Move to next line after each row
        printf("\n");
    }
    
    return 0;
}
