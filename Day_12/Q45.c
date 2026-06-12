#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;               // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num /= 10;                      // remove last digit
    }
    return (original == reversed);      // return 1 if palindrome, else 0
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
