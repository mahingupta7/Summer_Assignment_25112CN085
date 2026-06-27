#include <stdio.h>

struct Salary {
    int emp_id;
    float basic, hra, da, gross;
};

int main() {
    struct Salary s[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &s[i].emp_id);
        printf("Basic Salary: ");
        scanf("%f", &s[i].basic);

        s[i].hra = 0.2 * s[i].basic;
        s[i].da = 0.1 * s[i].basic;
        s[i].gross = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\n--- Salary Details ---\n");
    for(i = 0; i < n; i++) {
        printf("Emp ID: %d | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
               s[i].emp_id, s[i].basic, s[i].hra, s[i].da, s[i].gross);
    }

    return 0;
}
