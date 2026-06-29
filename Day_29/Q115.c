#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    gets(str1);

    while (1) {
        printf("\n=== STRING OPERATIONS MENU ===\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                printf("Length of string = %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter another string: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 4:
                printf("Enter another string: ");
                gets(str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 5:
                printf("Exiting string system...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
