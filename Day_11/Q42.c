#include <stdio.h>

// Function to find maximum of two numbers
int maximum(int a, int b) {
    // If a is greater than b, return a; otherwise return b
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, result;

    // Asking user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the maximum function
    result = maximum(num1, num2);

    // Display the result
    printf("The maximum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
