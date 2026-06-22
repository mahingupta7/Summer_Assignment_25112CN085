#include <stdio.h>

int main() {
    char str[200];
    int count = 1, i;

    printf("Enter a sentence: ");
    gets(str);

    // count spaces to find words
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            count++;
    }

    printf("Total words = %d\n", count);
    return 0;
}
