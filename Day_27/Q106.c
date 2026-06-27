#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Records ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}
