#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student { int roll; char name[50]; float marks; };
struct Book { int id; char title[50]; char author[50]; };
struct Employee { int id; char name[50]; float salary; };

int main() {
    struct Student s[MAX]; int sn=0;
    struct Book b[MAX]; int bn=0;
    struct Employee e[MAX]; int en=0;
    int choice, i;

    do {
        printf("\n===== Mini Project Menu =====\n");
        printf("1. Manage Students\n");
        printf("2. Manage Books\n");
        printf("3. Manage Employees\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int ch;
                printf("\n--- Student Menu ---\n1. Add\n2. Display\nEnter: ");
                scanf("%d", &ch);
                if (ch==1 && sn<MAX) {
                    printf("Roll: "); scanf("%d",&s[sn].roll);
                    printf("Name: "); scanf("%s",s[sn].name);
                    printf("Marks: "); scanf("%f",&s[sn].marks);
                    sn++;
                } else if (ch==2) {
                    for (i=0;i<sn;i++) printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
                }
                break;
            }
            case 2: {
                int ch;
                printf("\n--- Book Menu ---\n1. Add\n2. Display\nEnter: ");
                scanf("%d", &ch);
                if (ch==1 && bn<MAX) {
                    printf("ID: "); scanf("%d",&b[bn].id);
                    printf("Title: "); scanf("%s",b[bn].title);
                    printf("Author: "); scanf("%s",b[bn].author);
                    bn++;
                } else if (ch==2) {
                    for (i=0;i<bn;i++) printf("%d\t%s\t%s\n",b[i].id,b[i].title,b[i].author);
                }
                break;
            }
            case 3: {
                int ch;
                printf("\n--- Employee Menu ---\n1. Add\n2. Display\nEnter: ");
                scanf("%d", &ch);
                if (ch==1 && en<MAX) {
                    printf("ID: "); scanf("%d",&e[en].id);
                    printf("Name: "); scanf("%s",e[en].name);
                    printf("Salary: "); scanf("%f",&e[en].salary);
                    en++;
                } else if (ch==2) {
                    for (i=0;i<en;i++) printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
                }
                break;
            }
            case 4: printf("Exiting Project...\n"); break;
            default: printf("Invalid!\n");
        }
    } while (choice != 4);

    return 0;
}
