#include <stdio.h>
#include <string.h>

#define MAX 50

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[MAX];
    int n = 0, choice, i, id, found;
    char searchTitle[50];

    do {
        printf("\n===== Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search by ID\n");
        printf("4. Search by Title\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n < MAX) {
                    printf("Enter Book ID: ");
                    scanf("%d", &b[n].id);
                    printf("Enter Title: ");
                    scanf("%s", b[n].title);
                    printf("Enter Author: ");
                    scanf("%s", b[n].author);
                    n++;
                    printf("Book added!\n");
                } else printf("Library full!\n");
                break;

            case 2:
                printf("\n--- Book List ---\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n", b[i].id, b[i].title, b[i].author);
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        printf("Found: %d\t%s\t%s\n", b[i].id, b[i].title, b[i].author);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Book not found!\n");
                break;

            case 4:
                printf("Enter Title to search: ");
                scanf("%s", searchTitle);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(b[i].title, searchTitle) == 0) {
                        printf("Found: %d\t%s\t%s\n", b[i].id, b[i].title, b[i].author);
                        found = 1;
                    }
                }
                if (!found) printf("Book not found!\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
