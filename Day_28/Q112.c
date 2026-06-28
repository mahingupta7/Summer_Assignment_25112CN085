#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice, i;
    char searchName[50];

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[count].name);
                printf("Enter Phone Number: ");
                scanf(" %[^\n]", contacts[count].phone);
                count++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                printf("\nContacts List:\n");
                for(i = 0; i < count; i++)
                    printf("%s\t%s\n", contacts[i].name, contacts[i].phone);
                break;

            case 3:
                printf("Enter name to search: ");
                scanf(" %[^\n]", searchName);
                for(i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        printf("Contact Found: %s\t%s\n", contacts[i].name, contacts[i].phone);
                        break;
                    }
                }
                if(i == count) printf("Contact not found!\n");
                break;
        }
    } while(choice != 4);

    return 0;
}
