#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    gets(str);

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    // Find maximum frequency
    int max = 0;
    char result;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }

    printf("Maximum occurring character: %c (appears %d times)\n", result, max);
    return 0;
}
