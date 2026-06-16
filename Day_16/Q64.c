#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    
    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array (simple bubble sort)
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Remove duplicates
    printf("Array after removing duplicates: ");
    printf("%d ", arr[0]); // first element always unique
    for(i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
