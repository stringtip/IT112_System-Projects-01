#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_MEDICINES 100
#define MAX_MED_NAME 50

void addMedicine(int ids[], char names[][MAX_MED_NAME], float prices[], int *medicineCount, const char *name, float price) {
		ids[*medicineCount] = *medicineCount + 1;
		strcpy(names[*medicineCount], name);
		prices[*medicineCount] = price;

		(*medicineCount)++;
}

void displayMedicines(int ids[], char names[][MAX_MED_NAME], float prices[], int medicineCount) {
	int i;
	clrscr();
	printf("\nMedicine list: \n");
	for (i = 0; i < medicineCount; i++) {
		printf("ID: %d,    Name: %s,    Price: %.2f\n", ids[i], names[i], prices[i]);
	}
	printf("\n");

}

void cashout(char names[][MAX_MED_NAME], float prices[], int meds[][2], int medscount) {
	int i;
	float total = 0, cash;
	float change;
	for (i = 0; i < medscount; i++){
		printf("\n%s: %.2f x%d", names[meds[i][0] - 1], prices[meds[i][0] - 1], meds[i][1]);
		total += prices[meds[i][0] - 1] * meds[i][1];
	}
	do {
		printf("\n\nTotal: %.2f", total);
		printf("\nCash Amount: ");
		scanf("%f", &cash);

		if(cash < total) {
			printf("Insufficient cash. Please enter an amount equal to or higher than the total.\n");
		}
	} while (cash < total);

	change = cash - total;
	if (change > 0) {
		printf("Change: %.2f\n", change);
		printf("\nTHANK YOU FOR PURCHASING");
		getch();
	} else if (change == 0) {
		printf("Exact amount received. No change.\n");
		printf("\nTHANK YOU FOR PURCHASING");
		getch();
	}
	return;
}

void buymeds(int ids[], char names[][MAX_MED_NAME], float prices[] , int medicineCount) {
	int choice1, choice2;
	int meds[MAX_MEDICINES][2], medscount = 0;
	int existingIndex;
	int i;
	char ch;

	do {
		clrscr();
		do{
			displayMedicines(ids, names, prices, medicineCount);
			printf("\nCHOOSE MEDICINE BY ID: ");
			scanf("%d", &choice1);

			if (choice1 < 1 || choice1 > medicineCount) {
				printf("Invalid ID. Please choose a valid ID. \n");
				getch();

			}
		}while (choice1 < 1 || choice1 > medicineCount);

		existingIndex = -1;
		for (i = 0; i < medscount; i++) {
			if (meds[i][0] == choice1){
				existingIndex = i;
				break;
			}
		}
		if (existingIndex != -1) {
			do {
				printf("This medicine is already in your cart. Enter the new quantity: ");
				scanf("%d", &choice2);

				if(meds[existingIndex][1] + choice2 < 0) {
					printf("Invalid quantity. Quantity cannot make the total negative. Please enter a valid quantity.\n");
				}
			} while(meds[existingIndex][1] + choice2 < 0);
			meds[existingIndex][1] += choice2;
		}else{
			do{
				printf("Enter the quantity: ");
				scanf("%d", &choice2);
				if(choice2 < 0) {
					printf("\nPlease enter positive amount\n");
				}
			}while(choice2 < 0);
			meds[medscount][0] = choice1;
			meds[medscount][1] = choice2;
			medscount++;
		}
		printf("\nDo you want to add more? (y/n): ");
		scanf(" %c", &ch);
	}while (ch == 'y');

	if(medscount > 0){
		cashout(names, prices, meds, medscount);
	}else{
		printf("\nNo medicines added to the cart. \n");
		getch();
	}
	return;

}

void main() {
	int ids[MAX_MEDICINES];
	char names[MAX_MEDICINES][MAX_MED_NAME];
	float prices[MAX_MEDICINES];
	int medicineCount = 0;
	char newMedicineName[MAX_MED_NAME];
	float newMedicinePrice;
	int choice;
	addMedicine(ids, names, prices, &medicineCount, "Paracetamol", 5.99);
	addMedicine(ids, names, prices, &medicineCount, "Ibuprofen", 7.99);
	addMedicine(ids, names, prices, &medicineCount, "Aspirin", 3.49);
	addMedicine(ids, names, prices, &medicineCount, "Amoxicillin", 12.99);
	addMedicine(ids, names, prices, &medicineCount, "Metformin", 8.50);
	addMedicine(ids, names, prices, &medicineCount, "Omeprazole", 10.75);
	addMedicine(ids, names, prices, &medicineCount, "Salbutamol", 15.25);
	addMedicine(ids, names, prices, &medicineCount, "Hydrochlorothiazide", 6.30);
	addMedicine(ids, names, prices, &medicineCount, "Metroprolol", 9.80);
	addMedicine(ids, names, prices, &medicineCount, "Atorvastatin", 11.45);
	do {
		clrscr();
		printf("Medical Store Management System\n");
		printf("[1] ADD MEDICINE\n");
		printf("[2] DISPLAY MEDICINES\n");
		printf("[3] BUY MEDICINES\n");
		printf("[4] EXIIT\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				printf("Enter Additional Medicine Details: \n");
				printf("Name: ");
				scanf(" %[^\n]s", newMedicineName);
				printf("Price: ");
				scanf("%f", &newMedicinePrice);
				printf("Medicine Added Successfully!\n");
				addMedicine(ids, names, prices, &medicineCount, newMedicineName, newMedicinePrice);
				getch();
				break;

			case 2:
				displayMedicines(ids, names, prices, medicineCount);
				printf("\nPRESS ENTER TO GO TO MAIN MENU");
				getch();
				break;
			case 3:
				buymeds(ids, names, prices, medicineCount);
				break;
			case 4:
				printf("Exiting the program. Goodbye!\n");
				getch();
				break;
			default:
				printf("Invalid choice. Please try again. \n");
				getch();
		}
	} while (choice != 4);

}
