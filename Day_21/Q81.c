#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);  // reads input string

    // Count characters until null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}
