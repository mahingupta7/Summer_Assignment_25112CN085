#include <stdio.h>

int main() {
    int x, n;          // Variables to store base (x) and power (n)
    long long result = 1; // Variable to store the final result

    // input from user 
    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    // Multiply x, n times
    for (int i = 1; i <= n; i++) {
        result = result * x;  // Repeated multiplication
    }

    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}
