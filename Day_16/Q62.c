#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxFreq = 0, element = -1;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency of each element
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d (occurs %d times)\n", element, maxFreq);

    return 0;
}
