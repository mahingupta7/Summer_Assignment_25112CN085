#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    
    // Step 1: Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Find duplicates
    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // avoid printing same duplicate multiple times
            }
        }
    }

    return 0;
}
