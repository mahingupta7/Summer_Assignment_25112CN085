#include <stdio.h>
#include <math.h>   // For using the power function

int main() {
    long long binary;   // Variable to store the binary number
    int decimal = 0;    // Variable to store the decimal result
    int base = 1;       // Base value (2^0 initially)
    int remainder;      // To store each digit of binary number

    // Asking user for input
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Loop until the binary number becomes 0
    while (binary > 0) {
        remainder = binary % 10;      // Extract the last digit
        decimal = decimal + remainder * base; // Add to decimal result
        binary = binary / 10;         // Remove the last digit
        base = base * 2;              // Increase base (power of 2)
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
