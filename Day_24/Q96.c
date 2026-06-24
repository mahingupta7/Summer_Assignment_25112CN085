#include <stdio.h>
#include <string.h>

// Program to remove duplicate characters from a string
int main() {
    char str[100];
    int freq[256] = {0};  // frequency array for ASCII characters

    printf("Enter a string: ");
    gets(str);

    printf("\nString after removing duplicates: ");

    // Traverse each character
    for (int i = 0; i < strlen(str); i++) {
        unsigned char ch = str[i];

        // Print only if not printed before
        if (freq[ch] == 0) {
            printf("%c", ch);
            freq[ch] = 1;  // mark as printed
        }
    }

    return 0;
}
