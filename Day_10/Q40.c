#include <stdio.h>

int main() {
    int rows = 5; 

    for(int i = 1; i <= rows; i++) {
        
        // First inner loop: print spaces before letters
        // Spaces decrease as we go down each row
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Second inner loop: print ascending letters (A to current row letter)
        for(int k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }

        // Third inner loop: print descending letters (back down to A)
        for(int k = i - 1; k >= 1; k--) {
            printf("%c", 'A' + k - 1);
        }

        printf("\n");
    }

    return 0;
}
