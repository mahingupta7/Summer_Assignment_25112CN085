#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams (different lengths).\n");
        return 0;
    }

    // Count characters in str1 and subtract for str2
    for (int i = 0; str1[i] != '\0'; i++)
        freq[(unsigned char)str1[i]]++;
    for (int i = 0; str2[i] != '\0'; i++)
        freq[(unsigned char)str2[i]]--;

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams!\n");
    return 0;
}
