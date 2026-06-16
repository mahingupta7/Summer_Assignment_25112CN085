#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5; 
    int sum_expected = n * (n + 1) / 2;
    int sum_actual = 0;

    for(int i = 0; i < n - 1; i++) {
        sum_actual += arr[i];
    }

    int missing = sum_expected - sum_actual;
    printf("Missing number is: %d\n", missing);

    return 0;
}
