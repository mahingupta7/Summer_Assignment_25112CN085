#include <stdio.h>

int main() {
    int rows = 5; 

    for(int i = 1; i <= rows; i++) {
        
        // First inner loop: print spaces before numbers
        // Spaces decrease as we go down each row
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Second inner loop: print ascending numbers (1 to i)
        for(int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Third inner loop: print descending numbers (i-1 down to 1)
        for(int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
