#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    // Base cases: first two terms are fixed
    if (n == 0) {
        return 0;   // Fibonacci(0) = 0
    }
    else if (n == 1) {
        return 1;   // Fibonacci(1) = 1
    }
    // Recursive case: sum of previous two terms
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms, i;

    // Ask the user how many terms to print
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series up to %d terms:\n", terms);

    // Print each term using the recursive function
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n"); // Move to new line after series
    return 0;    