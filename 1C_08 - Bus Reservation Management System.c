/*
SYSTEM: BUS RESERVATION SYSTEM
Members and roles: Arnado, Marc Benidec C.(Project manager/leader, designer, system analyst),
		   Jamero, Marianney M.(Support),
		   Palania, Jay Mark (Support),
		   Dumalaoron, Jefrey (Support),
*IDE used is CodeBlocks, because Turbo C++ not working/error(unknown cause)*

*/
#include <stdio.h>
#include <conio.h>
#define TOTAL_SEATS 10

void displaySeats();
void reserveSeat();
void cancelReservation();

// Array to represent bus seats (0: available, 1: reserved)
int seats[TOTAL_SEATS] = {0};

int main() {
    int choice;
    clrscr();

    do {
	printf("\n***************************");
	printf("\nBus Reservation System\n");
	printf("1. Display Available Seats\n");
	printf("2. Reserve a Seat\n");
	printf("3. Cancel Reservation\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	printf("*****************************\n");

	switch (choice) {
	    case 1:
		displaySeats();
		break;
	    case 2:
		reserveSeat();
		break;
	    case 3:
		cancelReservation();
		break;
	    case 4:
		printf("Exiting the program. Goodbye!\n");
		break;
	    default:
		printf("Invalid choice. Please enter a valid option.\n");
	}
    } while (choice != 4);

    getch();
    return 0;
}

void displaySeats() {
    int i;
    clrscr();
    printf("\nAvailable Seats:\n");
    for ( i = 0; i < TOTAL_SEATS; ++i) {
	printf("Seat %d: %s\n", i + 1, seats[i] ? "Reserved" : "Available");
    }
}

void reserveSeat() {
    int seatNumber;
    clrscr();

    printf("Enter the seat number you want to reserve (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
	printf("Invalid seat number. Please enter a valid seat number.\n");
    } else if (seats[seatNumber - 1] == 1) {
	printf("Seat %d is already reserved. Choose another seat.\n", seatNumber);
    } else {
	seats[seatNumber - 1] = 1;
	printf("Seat %d reserved successfully.\n", seatNumber);
    }
}

void cancelReservation() {
    int seatNumber;
    clrscr();
    printf("Enter the seat number you want to cancel the reservation for (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
	printf("Invalid seat number. Please enter a valid seat number.\n");
    } else if (seats[seatNumber - 1] == 0) {
	printf("Seat %d is not reserved. Nothing to cancel.\n", seatNumber);
    } else {
	seats[seatNumber - 1] = 0;
	printf("Reservation for Seat %d canceled successfully.\n", seatNumber);
    }
}
