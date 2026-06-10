#include <stdio.h>

int main() {
    int rows = 5;  // total number of rows in the pyramid

    // Outer loop: controls each row
    for(int i = 1; i <= rows; i++) {
        
        // First inner loop: print spaces before stars
        // Spaces increase as we go down each row
        for(int j = 1; j < i; j++) {
            printf(" ");
        }

        // Second inner loop: print stars
        // Stars decrease by 2 each row
        for(int k = 1; k <= (2 * (rows - i) + 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
