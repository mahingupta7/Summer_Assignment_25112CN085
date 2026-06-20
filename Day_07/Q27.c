#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    // Base case: when number becomes 0, sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: last digit + sum of remaining digits
    else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int num;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display the result using the recursive function
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));

    return 0;
}
