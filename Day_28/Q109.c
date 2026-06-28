#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100];
    int count = 0, choice, i;
    char searchTitle[50];

    do {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &library[count].id);
                printf("Enter Book Title: ");
                scanf(" %[^\n]", library[count].title);
                printf("Enter Author Name: ");
                scanf(" %[^\n]", library[count].author);
                count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                printf("\nList of Books:\n");
                for(i = 0; i < count; i++)
                    printf("%d\t%s\t%s\n", library[i].id, library[i].title, library[i].author);
                break;

            case 3:
                printf("Enter title to search: ");
                scanf(" %[^\n]", searchTitle);
                for(i = 0; i < count; i++) {
                    if(strcmp(library[i].title, searchTitle) == 0) {
                        printf("Book Found: %d\t%s\t%s\n", library[i].id, library[i].title, library[i].author);
                        break;
                    }
                }
                if(i == count) printf("Book not found!\n");
                break;
        }
    } while(choice != 4);

    return 0;
}
