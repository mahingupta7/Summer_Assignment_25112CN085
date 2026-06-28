#include <stdio.h>

int main() {
    int seats = 50, booked = 0, choice, tickets;

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Tickets\n2. Check Available Seats\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);
                if(tickets <= seats - booked) {
                    booked += tickets;
                    printf("Tickets booked successfully!\n");
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", seats - booked);
                break;
        }
    } while(choice != 3);

    return 0;
}
