#include<stdio.h>
#include<conio.h>
#define MAX_CONTACTS 100

struct Contact
{
    char name[50];
    char surname[15];
    char phone[15];
    char email[50];
};

void clearScreen();
void displayMenu();
void addContact(struct Contact contacts[], int *numcontacts);
void displayContacts(struct Contact contacts[], int numcontacts);
void searchContact(struct Contact contacts[], int numcontacts);
void editContact(struct Contact contacts[], int numContacts);
void deleteContact(struct Contact contacts[], int *numContacts);

int main() {
    struct Contact Contacts[MAX_CONTACTS];
    int numContacts = 0;
    int choice;

    do {
	clearScreen();
	displayMenu();

	gotoxy(5,18); cprintf("ENTER YOUR CHOICE: ");
	scanf("%d", &choice);

	switch (choice) {
	    case 1:
		addContact(Contacts, &numContacts);
		break;
	    case 2:
		displayContacts(Contacts, numContacts);
		break;
	    case 3:
		searchContact(Contacts, numContacts);
		break;
	    case 4:
		editContact(Contacts, numContacts);
		break;
	    case 5:
		deleteContact(Contacts, &numContacts);
	    case 6:
		printf("Exiting the program. Goodbye!\n");
		break;
	    default:
		printf("Invalid choice. Please try again.\n");
	}

    } while (choice != 6);

    return 0;
}

void clearScreen()
{
   clrscr();
}

void displayMenu()
{
    textcolor(YELLOW);
    gotoxy(4,8);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(4,9);  cprintf("³                         ³");
    gotoxy(4,10); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(4,11); cprintf("³                         ³");
    gotoxy(4,12); cprintf("³                         ³");
    gotoxy(4,13); cprintf("³                         ³");
    gotoxy(4,14); cprintf("³                         ³");
    gotoxy(4,15); cprintf("³                         ³");
    gotoxy(4,16); cprintf("³                         ³");
    gotoxy(4,17); cprintf("³                         ³");
    gotoxy(4,18); cprintf("³                         ³");
    gotoxy(4,19); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

    textcolor(WHITE);
    gotoxy(5,9);  cprintf("CONTACT MANAGEMENT SYSTEM");
    gotoxy(5,11); cprintf("[1] Add Contacts");
    gotoxy(5,12); cprintf("[2] Display Contacts");
    gotoxy(5,13); cprintf("[3] Search contacts");
    gotoxy(5,14); cprintf("[4] Edit Contacts");
    gotoxy(5,15); cprintf("[5] Delete a contact");
    gotoxy(5,16); cprintf("[6] Exit");
}

void addContact(struct Contact contacts[], int *numContacts)
{
    if (*numContacts < MAX_CONTACTS)
    {
       textcolor(YELLOW);
       gotoxy(35,8);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
       gotoxy(35,9);  cprintf("³²²²²²²²²²²              ²²²²²²²²²²²³");
       gotoxy(35,10); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
       gotoxy(35,11); cprintf("³                                   ³");
       gotoxy(35,12); cprintf("³                                   ³");
       gotoxy(35,13); cprintf("³                                   ³");
       gotoxy(35,14); cprintf("³                                   ³");
       gotoxy(35,15); cprintf("³                                   ³");
       gotoxy(35,16); cprintf("³                                   ³");
       gotoxy(35,17); cprintf("³                                   ³");
       gotoxy(35,18); cprintf("³                                   ³");
       gotoxy(35,19); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

       textcolor(WHITE);
       gotoxy(47,9);  cprintf("ADD CONTACTS");
       gotoxy(37,11); cprintf("Enter name   : ");
       scanf("%s", contacts[*numContacts].name);

       gotoxy(37,12); cprintf("Enter surname: ");
       scanf("%s", contacts[*numContacts].surname);

       gotoxy(37,13); cprintf("Enter phone  : ");
       scanf("%s", contacts[*numContacts].phone);

       gotoxy(37,14); cprintf("Enter email  : ");
       scanf("%s", contacts[*numContacts].email);

       (*numContacts)++;

       textcolor(WHITE + BLINK);
       gotoxy(40,16); cprintf("Contact added successfully!");
    }
    else
    {
	gotoxy(35,20); printf("Contact list is full. Cannot add more contacts.\n");
    }

    textcolor(WHITE);
    gotoxy(40,18); cprintf("Press any key to continue...");
    getch();
}

void displayContacts(struct Contact contacts[], int numContacts)
{
    int i;
    clrscr();


	printf("\n                        ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	printf("\n                        ³²²²²²²² CONTACTS ²²²²²²²²³");
	printf("\n                        ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

    for (i = 0; i < numContacts; ++i)
    {
	printf("\n                          Name   : %s              ", contacts[i].name);
	printf("\n                          Surname: %s              ", contacts[i].surname);
	printf("\n                          Phone  : %s              ", contacts[i].phone);
	printf("\n                          Email  : %s              ", contacts[i].email);
	printf("\n                        ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    }

    textcolor(CYAN);
    cprintf("\n                                                     Press any key to continue...");
    getch();
}

void searchContact(struct Contact contacts[], int numContacts)
{
   char searchName[50];
   int found = 0;
   int i;

   textcolor(CYAN);
   gotoxy(35,5);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(35,7);  cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

   textcolor(WHITE);
   gotoxy(36,6);   cprintf("Enter name to search: ");
   scanf("%s", searchName);

   textcolor(YELLOW);
   gotoxy(35,8);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(35,9);  cprintf("³²²²²²²²²²               ²²²²²²²²²²²³");
   gotoxy(35,10); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
   gotoxy(35,11); cprintf("³                                   ³");
   gotoxy(35,12); cprintf("³                                   ³");
   gotoxy(35,13); cprintf("³                                   ³");
   gotoxy(35,14); cprintf("³                                   ³");
   gotoxy(35,15); cprintf("³                                   ³");
   gotoxy(35,16); cprintf("³                                   ³");
   gotoxy(35,17); cprintf("³                                   ³");
   gotoxy(35,18); cprintf("³                                   ³");
   gotoxy(35,19); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

   for(i = 0; i < numContacts; i++)
   {
      if(strcmp(contacts[i].name, searchName) == 0)
      {
	textcolor(WHITE);
	gotoxy(46,9);  cprintf("CONTACT FOUND");
	gotoxy(37,11); cprintf("Name   : %s", contacts[i].name);
	gotoxy(37,12); cprintf("Surname: %s", contacts[i].surname);
	gotoxy(37,13); cprintf("Phone  : %s", contacts[i].phone);
	gotoxy(37,14); cprintf("Email  : %s", contacts[i].email);
	found = 1;
      }
   }
   if(!found)
   {
     textcolor(WHITE);
     gotoxy(49,9);  cprintf("INVALID");

     textcolor(WHITE + BLINK);
     gotoxy(44,13); cprintf("Contact not found!");
   }
   textcolor(WHITE);
   gotoxy(40,17); cprintf("Press any key to continue...");
   getch();
}

void editContact(struct Contact contacts[], int numContacts)
{
   char editName;
   int found = 0;
   int  i;

   textcolor(CYAN);
   gotoxy(35,5); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(35,7); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

   textcolor(WHITE);
   gotoxy(36,6); cprintf("Search name to edit contact: ");
   scanf("%s", editName);

   textcolor(YELLOW);
   gotoxy(35,8);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(35,9);  cprintf("³²²²²²²²²²               ²²²²²²²²²²²³");
   gotoxy(35,10); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
   gotoxy(35,11); cprintf("³                                   ³");
   gotoxy(35,12); cprintf("³                                   ³");
   gotoxy(35,13); cprintf("³                                   ³");
   gotoxy(35,14); cprintf("³                                   ³");
   gotoxy(35,15); cprintf("³                                   ³");
   gotoxy(35,16); cprintf("³                                   ³");
   gotoxy(35,17); cprintf("³                                   ³");
   gotoxy(35,18); cprintf("³                                   ³");
   gotoxy(35,19); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

   for(i = 0; i < numContacts; i++)
   {
       if(strcmp(contacts[i].name, editName) == 0)
       {
	 textcolor(WHITE);
	 gotoxy(46,9);  cprintf("EDIT CONTACT");

	 gotoxy(37,11); cprintf("Name   : ");
	 scanf("%s", contacts[i].name);

	 gotoxy(37,12); cprintf("Surname: ");
	 scanf("%s", contacts[i].surname);

	 gotoxy(37,13); cprintf("Phone  : ");
	 scanf("%s", contacts[i].phone);

	 gotoxy(37,14); cprintf("Email  : ");
	 scanf("%s", contacts[i].email);

	 textcolor(WHITE + BLINK);
	 gotoxy(44,16); cprintf("Edit successful!");
	 found = 1;

	}
   }
   if(!found)
   {
     gotoxy(45,9); printf("²²²²²²²²²²²²²²²");
     textcolor(WHITE + BLINK);
     gotoxy(49,14); cprintf("Invalid!");
   }
   textcolor(WHITE);
   gotoxy(40,18); cprintf("press any key to continue...");
   getch();
}

void deleteContact(struct Contact contacts[], int *numContacts)
{
   char deleteName[50];
   int i = 0;
   int found = 0;

   if(*numContacts == 0)
   {
     textcolor(YELLOW);
     gotoxy(35,12); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");

     textcolor(WHITE);
     gotoxy(47,13); printf("No contacts");

     textcolor(YELLOW);
     gotoxy(35,14); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
   }
   else
   {
     textcolor(CYAN);
     gotoxy(35,5); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
     gotoxy(35,7); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

     textcolor(WHITE);
     gotoxy(36,6); cprintf("Enter name to delete: ");
     scanf("%s", deleteName);

     textcolor(YELLOW);
     gotoxy(35,8);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
     gotoxy(35,9);  cprintf("³²²²²²²²²²²²²          ²²²²²²²²²²²²²³");
     gotoxy(35,10); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
     gotoxy(35,11); cprintf("³                                   ³");
     gotoxy(35,12); cprintf("³                                   ³");
     gotoxy(35,13); cprintf("³                                   ³");
     gotoxy(35,14); cprintf("³                                   ³");
     gotoxy(35,15); cprintf("³                                   ³");
     gotoxy(35,16); cprintf("³                                   ³");
     gotoxy(35,17); cprintf("³                                   ³");
     gotoxy(35,18); cprintf("³                                   ³");
     gotoxy(35,19); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

   while(i < *numContacts)
   {
       if(strcmp(contacts[i].name, deleteName) == 0)
       {
	 found = 1;

	 contacts[i] = contacts[*numContacts - 1];

	 textcolor(WHITE);
	 gotoxy(50,9); cprintf("DELETE");

	 textcolor(WHITE);
	 gotoxy(40,13); cprintf("Contact deleted successfully\n");
	 (*numContacts)--;
	 break;
       }
       i++;
   }

      if(!found)
      {
	gotoxy(48,9); printf("²²²²²²²²²²");
	textcolor(WHITE + BLINK);
	gotoxy(44,13); cprintf("Contact not found!");
      }
   }
   textcolor(WHITE);
   gotoxy(40,16); cprintf("press any key to continue...");
   getch();
}





