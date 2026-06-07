#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int n, int rev) {
    // Base case: when number becomes 0, return the reversed result
    if (n == 0) {
        return rev;
    }
    // Recursive case: take last digit and build reversed number
    else {
        return reverseNumber(n / 10, rev * 10 + (n % 10));
    }
}

int main() {
    int num, reversed;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive function with initial reversed value = 0
    reversed = reverseNumber(num, 0);

    printf("Reversed number is %d\n", reversed);

    return 0; 
}
