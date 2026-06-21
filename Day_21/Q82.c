#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);

    len = 0;
    while (str[len] != '\0')  // find length manually
        len++;

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';  // end the reversed string

    printf("Reversed string: %s\n", rev);
    return 0;
}
