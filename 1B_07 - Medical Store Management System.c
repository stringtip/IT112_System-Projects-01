#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX_MEDICINES 100

struct Medicine {
    char name[50];
    int quantity;
    float price;
};

struct Medicine medStore[MAX_MEDICINES];
int totalMedicines = 0;

void displayMenu() {
    system("cls");
    printf("\nMedical Store Management System\n");
    printf("1. Add Medicine\n");
    printf("2. Update Stock\n");
    printf("3. Process Sale\n");
    printf("4. Display Medicines\n");
    printf("5. Exit\n");
}

void addMedicine() {
    struct Medicine newMedicine;
    if (totalMedicines == MAX_MEDICINES) {
	textcolor(RED + BLINK);
        printf("Error: Maximum limit reached. Cannot add more medicines.\n");
        return;
    }

    printf("\nEnter Medicine Details:\n");
    printf("Name: ");
    scanf("%s", newMedicine.name);
    printf("Quantity: ");
    scanf("%d", &newMedicine.quantity);
    printf("Price: ");
    scanf("%f", &newMedicine.price);

    medStore[totalMedicines++] = newMedicine;
    textcolor(BLUE + BLINK);{
    cprintf("Medicine added successfully!\n");}
    system("pause");
}

void updateStock() {
    char searchName[50];
    int quantity, i;

    printf("\nEnter the name of the medicine to update stock: ");
    scanf("%s", searchName);

    for (i = 0; i < totalMedicines; i++) {
        if (strcmp(medStore[i].name, searchName) == 0) {
            printf("Current Stock: %d\n", medStore[i].quantity);
            printf("Enter new stock quantity: ");
            scanf("%d", &quantity);
	    medStore[i].quantity = quantity;
	    textcolor(BLUE + BLINK);
	    cprintf("Stock updated successfully!\n");
	    system("pause");
            return;
        }
    }
    textcolor( RED + BLINK );{
    cprintf("Medicine not found in the inventory.\n");}
    system("pause");
}

void processSale() {
    char searchName[50];
    int soldQuantity, i;
    float totalCost;
    printf("\nEnter the name of the medicine to process sale: ");
    scanf("%s", searchName);

    for (i = 0; i < totalMedicines; i++) {
        if (strcmp(medStore[i].name, searchName) == 0) {
            printf("Current Stock: %d\n", medStore[i].quantity);
	    printf("Enter quantity sold: ");
            scanf("%d", &soldQuantity);

	    if (soldQuantity > medStore[i].quantity) {
	       textcolor(RED + BLINK);
	       cprintf("Error: Insufficient stock. Sale cannot be processed.\n");
	    } else {
                medStore[i].quantity -= soldQuantity;
		totalCost = soldQuantity * medStore[i].price;
		textcolor(YELLOW + BLINK);
		cprintf("Sale processed successfully!\n");
                printf("Total Cost: %.2f\n", totalCost);
	    }
	    system("pause");
            return;
	}
    }
    textcolor(RED + BLINK);
    cprintf("Medicine not found in the inventory.\n");
    system("pause");
}

void displayMedicines() {
    int i;
    if (totalMedicines == 0) {
	textcolor(RED + BLINK);
	cprintf("No medicines in the inventory.\n");
	system("pause");
        return;
    }

    printf("\nMedicine Inventory:\n");
    printf("+----------------------+------------+------------+\n");
    printf("| %-20s | %-10s | %-10s |\n", "Medicine Name", "Quantity", "Price");
    printf("+----------------------+------------+------------+\n");

    for (i = 0; i < totalMedicines; i++) {
        printf("| %-20s | %-10d | %-10.2f |\n", medStore[i].name, medStore[i].quantity, medStore[i].price);
    }
    printf("+----------------------+------------+------------+\n");
    system("pause");
}

int main() {
    int choice;
    clrscr();
    do {
        displayMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMedicine();
                break;
            case 2:
                updateStock();
                break;
            case 3:
                processSale();
                break;
            case 4:
                displayMedicines();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
	    default:
		textcolor(RED + BLINK);
		cprintf("Invalid choice. Please try again.\n");
	}

    } while (choice != 5);
    getch();
    return 0;
}
