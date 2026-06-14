#include <stdio.h>

int main() {
    int arr[100], n, key, i, count = 0;

    // Step 1: Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input element to find frequency
    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    // Step 4: Count frequency
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}
