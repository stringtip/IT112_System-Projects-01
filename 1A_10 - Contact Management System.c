/* MEMBERS:             Course&Program: BSIT 1A
   1.Dann Kristoffer Zapitan
   2.Val Christian Torres
   3.Noel Dominguez Jr.
   4.Lester Bulay
   */
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define g gotoxy
#define t textcolor

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

int displayMenu();
void addContact(struct Contact contacts[], int *numContacts);
void viewContacts(const struct Contact contacts[], int numContacts);

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int numContacts = 0;
    int choice;

    do {
	choice = displayMenu();

	switch (choice) {
	    case 1:
		addContact(contacts, &numContacts);
		break;
	    case 2:
		viewContacts(contacts, numContacts);
		break;
	    case 0:
		g(26,13); printf("Exiting the Contact Management System.\n");
		break;
	    default:
		g(26,12); printf("Invalid choice. Please try again.\n");
	}
    } while (choice != 0);

    getch();
    return 0;
}

int displayMenu() {
    int choice;
    clrscr();
    t(RED);
    g(26,7); printf("Contact Management System Menu\n");
    g(26,8); printf("1. Add Contact\n");
    g(26,9); printf("2. View Contacts\n");
    g(26,10); printf("0. Exit\n");


    g(26,11); printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}

void addContact(struct Contact contacts[], int *numContacts) {
    if (*numContacts < MAX_CONTACTS) {
    clrscr();
	t(YELLOW);
	g(26,7); printf("Enter contact details:\n");
	g(26,8); printf("Name: ");
	scanf("%s", contacts[*numContacts].name);
	g(26,9); printf("Phone: ");
	scanf("%s", contacts[*numContacts].phone);
	g(26,10);printf("Email: ");
	scanf("%s", contacts[*numContacts].email);
	t(YELLOW);
	(*numContacts)++;
	g(26,11); printf("Contact added successfully.\n");
    } else {
	g(26,11); printf("Contact limit reached. Cannot add more contacts.\n");
    }

    g(26,12); printf("Press any key to continue...\n");
    getch();
}

void viewContacts(const struct Contact contacts[], int numContacts) {
    int i;
    clrscr();
    if (numContacts > 0) {
	printf("List of Contacts:\n");
	for (i = 0; i < numContacts; i++) {
	t(YELLOW);
	    printf("Contact %d:\n", i + 1);
	    printf("Name: %s\n", contacts[i].name);
	    printf("Phone: %s\n", contacts[i].phone);
	    printf("Email: %s\n\n", contacts[i].email);
	}
    } else {
	t(RED);
	g(26,11); printf("No contacts available.\n");
    }
    t(GREEN);
    g(26,13);printf("Press any key to continue...\n");
    getch();
}