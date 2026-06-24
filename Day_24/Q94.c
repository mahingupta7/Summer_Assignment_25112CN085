#include <stdio.h>
#include <string.h>

// Program to compress a string by counting consecutive characters
// Example: aabbcc → a2b2c2
int main() {
    char str[100];
    int count = 1;

    printf("Enter a string: ");
    gets(str);

    printf("\nCompressed string: ");

    // Traverse the string character by character
    for (int i = 0; i < strlen(str); i++) {
        // Count consecutive occurrences
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            // Print the character and its count
            printf("%c%d", str[i], count);
            count = 1;  // reset count for next character
        }
    }

    return 0;
}
