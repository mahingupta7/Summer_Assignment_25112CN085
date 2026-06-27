#include <stdio.h>

struct Marksheet {
    int roll;
    char name[50];
    float sub1, sub2, sub3, total, percent;
};

int main() {
    struct Marksheet m[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &m[i].roll);
        printf("Name: ");
        scanf("%s", m[i].name);
        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &m[i].sub1, &m[i].sub2, &m[i].sub3);

        m[i].total = m[i].sub1 + m[i].sub2 + m[i].sub3;
        m[i].percent = m[i].total / 3;
    }

    printf("\n--- Marksheet ---\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Total: %.2f | Percentage: %.2f%%\n",
               m[i].roll, m[i].name, m[i].total, m[i].percent);
    }

    return 0;
}
