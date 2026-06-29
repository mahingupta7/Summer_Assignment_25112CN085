#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[100];
    int count = 0, choice, i, id, found;
    while (1) {
        printf("\n=== INVENTORY MANAGEMENT SYSTEM ===\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Update Quantity\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item ID: ");
                scanf("%d", &items[count].id);
                printf("Enter item name: ");
                scanf("%s", items[count].name);
                printf("Enter quantity and price: ");
                scanf("%d %f", &items[count].quantity, &items[count].price);
                count++;
                printf("Item added successfully!\n");
                break;
            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for (i = 0; i < count; i++)
                    printf("%d\t%s\t%d\t%.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price);
                break;
            case 3:
                printf("Enter item ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++)
                    if (items[i].id == id) {
                        printf("Found: %s, Qty: %d, Price: %.2f\n", items[i].name, items[i].quantity, items[i].price);
                        found = 1;
                        break;
                    }
                if (!found) printf("Item not found!\n");
                break;
            case 4:
                printf("Enter item ID to update: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++)
                    if (items[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &items[i].quantity);
                        printf("Quantity updated!\n");
                        found = 1;
                        break;
                    }
                if (!found) printf("Item not found!\n");
                break;
            case 5:
                printf("Exiting inventory system...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
