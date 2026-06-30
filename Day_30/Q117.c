#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[MAX];
    int n = 0, choice, i, found, roll;
    char searchName[50];

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n < MAX) {
                    printf("Enter Roll No: ");
                    scanf("%d", &s[n].roll);
                    printf("Enter Name: ");
                    scanf("%s", s[n].name);
                    printf("Enter Marks: ");
                    scanf("%f", &s[n].marks);
                    n++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Record full!\n");
                }
                break;

            case 2:
                printf("\n--- Student List ---\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll No to search: ");
                scanf("%d", &roll);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Found: %d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Student not found!\n");
                break;

            case 4:
                printf("Enter Name to search: ");
                scanf("%s", searchName);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(s[i].name, searchName) == 0) {
                        printf("Found: %d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                    }
                }
                if (!found) printf("Student not found!\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
