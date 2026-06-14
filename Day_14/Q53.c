#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;

    // Step 1: Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 4: Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    // Step 5: If not found
    if(!found) {
        printf("Element not found in array.\n");
    }

    return 0;
}
