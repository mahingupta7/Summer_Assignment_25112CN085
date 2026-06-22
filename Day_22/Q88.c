#include <stdio.h>

int main() {
    char str[100], newStr[100];
    int j = 0;

    printf("Enter a string: ");
    gets(str);

    // copy characters except spaces
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            newStr[j++] = str[i];
    }
    newStr[j] = '\0';

    printf("String without spaces: %s\n", newStr);
    return 0;
}
