#include <stdio.h>

int main() {
    int num;                 // variable to store the decimal number
    int binary[32];          // array to store binary digits
    int i = 0;               // index for array

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Special case: if number is 0
    if (num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Conversion process: divide by 2 and store remainders
    while (num > 0) {
        binary[i] = num % 2;   // remainder will be 0 or 1
        num = num / 2;         // reduce the number by dividing by 2
        i++;                   // move to next position in array
    }

    // Printing binary digits in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
