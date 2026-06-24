#include <stdio.h>
#include <string.h>

// Function to check if one string is a rotation of another
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths differ, rotation is impossible
    if (len1 != len2) {
        return 0;
    }

    // Create a temporary string that is str1 concatenated with itself
    char temp[200]; 
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 exists as a substring in temp
    if (strstr(temp, str2) != NULL) {
        return 1;  // rotation found
    } else {
        return 0;  // not a rotation
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Call the function and display result
    if (isRotation(str1, str2)) {
        printf("\nYes, '%s' is a rotation of '%s'.", str2, str1);
    } else {
        printf("\nNo, '%s' is not a rotation of '%s'.", str2, str1);
    }

    return 0;
}
