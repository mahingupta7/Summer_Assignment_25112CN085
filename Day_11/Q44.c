#include <stdio.h>

// Function to calculate factorial using loop
int factorial(int n) {
    int result = 1;

    // Multiply numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the factorial function
    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;
}
