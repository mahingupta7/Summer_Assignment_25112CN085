#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {4, 5, 6, 7, 8};
    int c[10];
    int i, j, k = 0, flag;

    // Copy all elements of first array
    for(i = 0; i < 5; i++) {
        c[k++] = a[i];
    }

    // Add elements from second array only if not already present
    for(i = 0; i < 5; i++) {
        flag = 0;
        for(j = 0; j < 5; j++) {
            if(b[i] == a[j]) {
                flag = 1; // Duplicate found
                break;
            }
        }
        if(flag == 0) {
            c[k++] = b[i];
        }
    }

    // Display union
    printf("Union of Arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
