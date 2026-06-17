#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {30, 40, 60, 70, 80};
    int i, j;

    printf("Common Elements: ");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]); // Print common element
            }
        }
    }

    return 0;
}
