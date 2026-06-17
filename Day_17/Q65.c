#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};      // First array
    int b[5] = {6, 7, 8, 9, 10};     // Second array
    int c[10];                       // Merged array
    int i, j;

    // Copy elements of first array into merged array
    for(i = 0; i < 5; i++) {
        c[i] = a[i];
    }

    // Copy elements of second array after the first
    for(j = 0; j < 5; j++) {
        c[i + j] = b[j];
    }

    // Display merged array
    printf("Merged Array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
