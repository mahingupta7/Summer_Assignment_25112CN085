#include <stdio.h>

int main() {
    int num;        // Variable to store the input number
    int count = 0;  // Variable to store the count of set bits

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop until the number becomes 0
    while (num > 0) {
        // Check the last bit using bitwise AND
        if (num & 1) {
            count++;   // If last bit is 1, increase count
        }
        num = num >> 1; // Right shift the number to check next bit
    }

    printf("Number of set bits: %d\n", count);

    return 0;
}
