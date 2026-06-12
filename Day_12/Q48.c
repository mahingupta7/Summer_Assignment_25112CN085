#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i; // add divisor
        }
    }
    return (sum == num); // return 1 if perfect, else 0
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is NOT a Perfect Number.\n", n);

    return 0;
}
