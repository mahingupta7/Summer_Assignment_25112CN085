#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second_largest;

    // Step 1: Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize
    largest = second_largest = -99999;

    // Step 4: Find largest and second largest
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if(second_largest == -99999)
        printf("No second largest element (all elements same).\n");
    else
        printf("Second largest element = %d\n", second_largest);

    return 0;
}
