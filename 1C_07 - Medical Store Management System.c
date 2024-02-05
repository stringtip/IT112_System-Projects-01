

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_MEDICINES 100

struct Medicine
{
    char name[50];
    int quantity;
    int price;
};

void clearScreen();
void displayMenu();
void addMedicine(struct Medicine medicines[], int *numMedicines);
void displayMedicines(struct Medicine medicines[], int numMedicines);
void sellMedicine(struct Medicine medicines[], int *numMedicines);

int main() {
    struct Medicine Medicines[MAX_MEDICINES];
    int numMedicines = 0;
    int choice;


    do {
	clearScreen();
	displayMenu();
      textcolor(CYAN);
      gotoxy(3,2);cprintf("ษอออออออออป");
      gotoxy(3,3);cprintf("อออออออออออ");
      gotoxy(3,4);cprintf("ศอออออออออผ");
      textcolor(YELLOW+ BLINK);
      gotoxy(5,3);cprintf("BSIT 1C");
       textcolor(YELLOW);
       gotoxy(5,19);cprintf("ENTER YOUR CHOICE: ");
	scanf("%d", &choice);

	switch (choice) {
	    case 1:
		addMedicine(Medicines, &numMedicines);
		break;
	    case 2:
		displayMedicines(Medicines, numMedicines);
		break;
	    case 3:
		sellMedicine(Medicines, &numMedicines);
		break;
	    case 4:
		printf("Exiting the program. Goodbye!\n");
		break;
	    default:
		printf("Invalid choice. Please try again.\n");
	}

    } while (choice != 4);

    return 0;
}

void clearScreen()
{
    clrscr();
}

void displayMenu()
{

    textcolor(CYAN);



    gotoxy(3,8);cprintf("ุอออออออออออออออออออออออออออออออออุ");
    gotoxy(3,9);cprintf("ณ                                 ณ");
   gotoxy(3,10);cprintf("ุอออออออออออออออออออออออออออออออออุ");
   gotoxy(3,11);cprintf("ณ                                 ณ");
   gotoxy(3,12);cprintf("ณ                                 ณ");
   gotoxy(3,13);cprintf("ณ                                 ณ");
   gotoxy(3,14);cprintf("ณ                                 ณ");
   gotoxy(3,15);cprintf("ณ                                 ณ");
   gotoxy(3,16);cprintf("ณ                                 ณ");
   gotoxy(3,17);cprintf("ณ                                 ณ");
   gotoxy(3,18);cprintf("ุอออออออออออออออออออออออออออออออออุ");
   gotoxy(3,19);cprintf("ณ                                 ณ");
   gotoxy(3,20);cprintf("ุอออออออออออออออออออออออออออออออออุ");
   textcolor(YELLOW);
    gotoxy(5,9); cprintf("MEDICAL STORE MANAGEMENT SYSTEM\n");
    textcolor(WHITE);
    gotoxy(5,11); cprintf("[1] Add Medicine\n");
    gotoxy(5,13); cprintf("[2] Display Medicines\n");
    gotoxy(5,15); cprintf("[3] Sell Medicine\n");
    gotoxy(5,17); cprintf("[4] Exit\n");
}

void addMedicine(struct Medicine medicines[], int *numMedicines)
{
    if (*numMedicines < MAX_MEDICINES)
    {
    textcolor(CYAN);
    gotoxy(41,8);cprintf("ุอออออออออออออออออออออออออออออออออุ");
    gotoxy(41,9);cprintf("ณ                                 ณ");
   gotoxy(41,10);cprintf("ุอออออออออออออออออออออออออออออออออุ");
   gotoxy(41,11);cprintf("ณ                                 ณ");
   gotoxy(41,12);cprintf("ณ                                 ณ");
   gotoxy(41,13);cprintf("ณ                                 ณ");
   gotoxy(41,14);cprintf("ณ                                 ณ");
   gotoxy(41,15);cprintf("ณ                                 ณ");
   gotoxy(41,16);cprintf("ณ                                 ณ");
   gotoxy(41,17);cprintf("ณ                                 ณ");
   gotoxy(41,18);cprintf("ุอออออออออออออออออออออออออออออออออุ");
   gotoxy(41,19);cprintf("ณ                                 ณ");
   gotoxy(41,20);cprintf("ุอออออออออออออออออออออออออออออออออุ");
   textcolor(YELLOW);
   textcolor(YELLOW);
      gotoxy(52,9);cprintf("ADD MEDICINE\n");
       textcolor(WHITE);
       gotoxy(43,11);cprintf("Enter name : ");
	scanf("%s", medicines[*numMedicines].name);

       gotoxy(43,13);	cprintf("Enter quantity: ");
	scanf("%d", &medicines[*numMedicines].quantity);

       gotoxy(43,15);cprintf("Enter price: ");
	scanf("%d", &medicines[*numMedicines].price);

	(*numMedicines)++;
	textcolor(YELLOW);
       gotoxy(43,19);cprintf("Medicine added successfully!\n");
    }
    else
    {
	printf("Medicine inventory is full. Cannot add more medicines.\n");
    }
   textcolor(BROWN + BLINK);
   gotoxy(25,22); cprintf("Press any key to continue...");
    getch();
}

void displayMedicines(struct Medicine medicines[], int numMedicines)
{
    int i;
    clrscr();


    for (i = 0; i < numMedicines; ++i)
    {

    printf("\n ฏฏฏฏฏฏฏฏฏMEDICINESฏฏฏฏฏฏฏฏฏฏ");
    printf("\n  1.  Name : %s                   \n", medicines[i].name);
    printf(" ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ ");
    printf("\n  ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ ");
    printf("\n  2.  Quantity: %d                \n", medicines[i].quantity);
    printf("  ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ ");
    printf("\n  ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ ");
    printf("\n  3.  Price: %d                   \n", medicines[i].price);
    printf("  ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ ");

    }


    getch();
}

void sellMedicine(struct Medicine medicines[], int *numMedicines) {
    if (*numMedicines > 0) {
	int found = 0;
	char searchName[50];
	int i;
	 int quantity;
	displayMedicines(medicines, *numMedicines);
	  textcolor(BLUE);
      gotoxy(35,2);cprintf("ษออออออออออออออออออออออออออออออออออออออออออออป");
      gotoxy(35,3);cprintf("บ                                            บ");
      gotoxy(35,4);cprintf("ศออออออออออออออออออออออออออออออออออออออออออออผ");
      textcolor(WHITE);
      gotoxy(37,3);cprintf("Enter the name medicine to sell: ");
	scanf("%s", searchName);


	for ( i = 0; i < *numMedicines; i++) {
	    if (strcmp(searchName, medicines[i].name) == 0) {
		found = 1;

		 textcolor(BLUE);
      gotoxy(35,5);cprintf("ษออออออออออออออออออออออออออออออออออออออออออออป");
      gotoxy(35,6);cprintf("บ                                            บ");
      gotoxy(35,7);cprintf("ศออออออออออออออออออออออออออออออออออออออออออออผ");
      textcolor(WHITE);
		gotoxy(37,6); cprintf("Enter the quantity to sell: ");
		scanf("%d", &quantity);

		if (quantity <= medicines[i].quantity) {
		    medicines[i].quantity -= quantity;
		      textcolor(BLUE);
      gotoxy(35,8);cprintf("ษออออออออออออออออออออออออออออออออออออออออออออป");
      gotoxy(35,9);cprintf("บ                                            บ");
     gotoxy(35,10);cprintf("ศออออออออออออออออออออออออออออออออออออออออออออผ");
		   textcolor(WHITE);
	       gotoxy(37,9); cprintf("Medicine sold successfully!\n");
		} else {
		    gotoxy(37,9); cprintf("Insufficient quantity in stock!\n");
		}
		break;
	    }
	}

	if (!found) {
	textcolor(BLUE);
      gotoxy(35,5);cprintf("ษออออออออออออออออออออออออออออออออออออออออออออป");
      gotoxy(35,6);cprintf("บ                                            บ");
      gotoxy(35,7);cprintf("ศออออออออออออออออออออออออออออออออออออออออออออผ");
      textcolor(WHITE);
		gotoxy(37,6); cprintf("Medicine not found!\n");
	}
    } else {
     clrscr();
  textcolor(CYAN);
  gotoxy(22,11);cprintf("ษอออออออออออออออออออออออออออออออป");
  gotoxy(22,12);cprintf("บ                               บ");
  gotoxy(22,13);cprintf("ศอออออออออออออออออออออออออออออออผ");
  textcolor(MAGENTA);
	 gotoxy(24,12);cprintf("No medicines available to sell");
    }
     textcolor(BROWN + BLINK);
      gotoxy(25,22); cprintf("Press any key to continue...");
    getch();
}
