#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50];
    char longest[50];
    int maxLen = 0;
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    gets(str);

    // Traverse each character
    while (str[i] != '\0') {
        // Build word until space or end of sentence
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';  // terminate current word

            // Compare length with maxLen
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0;  // reset for next word
        }
        i++;
    }

    // Check last word (if sentence doesn’t end with space)
    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("\nLongest word: %s", longest);
    printf("\nLength of longest word: %d", strlen(longest));

    return 0;
}
