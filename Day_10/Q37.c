#include <stdio.h>

int main() {
    int rows = 5;  // number of rows in pyramid
    for(int i = 1; i <= rows; i++) {
        // print spaces
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // print stars
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }
    return 0;
}
