#include <stdio.h>
#include <stdbool.h>  // for using true/false

// Function to check if a number is prime
bool isPrime(int n) {
    // Prime numbers are greater than 1
    if (n <= 1) {
        return false;
    }

    // Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // divisible → not prime
        }
    }

    return true;  // no divisors found → prime
}

int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function and display result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
