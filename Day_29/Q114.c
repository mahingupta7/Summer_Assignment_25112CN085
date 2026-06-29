#include <stdio.h>

int main() {
    int arr[100], n, choice, i, search, count, sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    while (1) {
        printf("\n=== ARRAY OPERATIONS MENU ===\n");
        printf("1. Display\n2. Search\n3. Sum\n4. Count Even/Odd\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array elements: ");
                for (i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                printf("Enter element to search: ");
                scanf("%d", &search);
                count = 0;
                for (i = 0; i < n; i++)
                    if (arr[i] == search) count++;
                if (count > 0)
                    printf("%d found %d times.\n", search, count);
                else
                    printf("Element not found.\n");
                break;
            case 3:
                sum = 0;
                for (i = 0; i < n; i++) sum += arr[i];
                printf("Sum of elements = %d\n", sum);
                break;
            case 4:
                count = 0;
                for (i = 0; i < n; i++)
                    if (arr[i] % 2 == 0) count++;
                printf("Even: %d, Odd: %d\n", count, n - count);
                break;
            case 5:
                printf("Exiting array system...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
