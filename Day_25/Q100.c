#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], words[50][50], temp[50];
    int i, j, k = 0, n = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    // Split sentence into words
    for(i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i] != ' ') {
            words[n][k++] = sentence[i];
        } else {
            words[n][k] = '\0';
            n++;
            k = 0;
        }
    }
    words[n][k] = '\0';
    n++;

    // Sort words by their length
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for(i = 0; i < n; i++)
        printf("%s ", words[i]);

    return 0;
}
