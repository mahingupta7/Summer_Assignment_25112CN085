#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate sum of digits^digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original); // return 1 if Armstrong, else 0
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
