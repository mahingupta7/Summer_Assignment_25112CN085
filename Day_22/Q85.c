#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, flag = 0;

    printf("Enter a string: ");
    gets(str);  // take input string

    len = strlen(str);

    // reverse the string
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';  // end the reversed string

    // compare original and reversed strings
    if(strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
