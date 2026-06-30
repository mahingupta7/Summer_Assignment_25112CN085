#include <stdio.h>
#include <string.h>

#define MAX 50

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[MAX];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== Employee Management =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n < MAX) {
                    printf("Enter ID: ");
                    scanf("%d", &e[n].id);
                    printf("Enter Name: ");
                    scanf("%s", e[n].name);
                    printf("Enter Salary: ");
                    scanf("%f", &e[n].salary);
                    n++;
                    printf("Employee added!\n");
                } else printf("Employee list full!\n");
                break;

            case 2:
                printf("\n--- Employee List ---\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", e[i].id, e[i].name, e[i].salary);
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("Found: %d\t%s\t%.2f\n", e[i].id, e[i].name, e[i].salary);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Employee not found!\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
