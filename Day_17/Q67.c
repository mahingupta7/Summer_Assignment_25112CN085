#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {4, 5, 6, 7, 8};
    int c[5];
    int i, j, k = 0;

    // Check common elements
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(a[i] == b[j]) {
                c[k++] = a[i]; // Store common element
            }
        }
    }

    // Display intersection
    printf("Intersection of Arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
