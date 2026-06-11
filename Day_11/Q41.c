#include <stdio.h>

// Function to find sum of two numbers
int sum(int a, int b) {
    // Add the two numbers and return result
    return a + b;
}

int main() {
    int num1, num2, result;

    // Asking user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the sum function
    result = sum(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
