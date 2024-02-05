#include <stdio.h>
#include <conio.h>
#include <string.h>
#define t textcolor
#define g gotoxy
#define MAX_BOOKS 100


struct Book {
    char title[50];
    unsigned long rollNumber;
    int page;
};

void addBook(struct Book books[], int *count) {
    if (*count < MAX_BOOKS) {
	struct Book newBook;

    clrscr();
    {
    t(CYAN);
    g(1,1); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄNO PAIN NO GAINÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    g(1,2); printf("³                                                                              ³");
    g(1,3); printf("³                                                                              ³");
    g(1,4); printf("³                                                                              ³");
    g(1,5); printf("³                                                                              ³");
    g(1,6); printf("³                                                                              ³");
    g(1,6); printf("³                                                                              ³");
    g(1,7); printf("³                                                                              ³");
    g(1,8); printf("³                                                                              ³");
    g(1,9); printf("³                                                                              ³");
    g(1,10);printf("³                                                                              ³");
    g(1,11);printf("³                                                                              ³");
    g(1,12);printf("³                                                                              ³");
    g(1,13);printf("³                                                                              ³");
    g(1,14);printf("³                                                                              ³");
    g(1,15);printf("³                                                                              ³");
    g(1,16);printf("³                                                                              ³");
    g(1,17);printf("³                                                                              ³");
    g(1,18);printf("³                                                                              ³");
    g(1,19);printf("³                                                                              ³");
    g(1,20);printf("³                                                                              ³");
    g(1,21);printf("³                                                                              ³");
    g(1,22);printf("³                                                                              ³");
    g(1,23);printf("³                                                                              ³");
    g(1,24);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    }

    t(CYAN);
    g(3,3);printf("ENTER BOOK TITLE: ");
	scanf(" %[^\n]", newBook.title);

    g(3,5);printf("ENTER BOOK ID: ");
	scanf("%lu", &newBook.rollNumber);

    g(3,7);printf("ENTER BOOK PAGES: ");
	scanf("%d", &newBook.page);

	books[*count] = newBook;
	(*count)++;

    t(LIGHTGREEN);
    g(3,15);cprintf("\nBook Added Successfully!...");

    } else {
    t(LIGHTRED+BLINK);
    g(3,15);cprintf("Maximum Number Of Books Reached!...");

    }
}

void displayBooks(struct Book books[], int count) {
    if (count > 0) {
	int i;

	clrscr();
	t(CYAN);
       g(2,15); printf(" BOOKS RECORDS:\n");
       g(2,16); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ--Ä¿");
       g(2,17); printf("³%-20s %-15s %-5s³","NAME","BOOK YEAR ","PAGES");
       g(2,18); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ--ÄÙ");

       g(2,19); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ-Ä¿");

	for (i = 0; i < count; i++) {
       g(2,20);printf("³%-20s %-15lu %-5.2d³", books[i].title, books[i].rollNumber, books[i].page);
	}

       g(2,21); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ-ÄÙ");

    } else {
	t(LIGHTRED+BLINK);
	g(3,15);cprintf("\nNo Book Records Available!...");
	t(WHITE);
    }
}

void searchBook(struct Book books[], int count) {
    if (count > 0) {
	unsigned long rollNumber;
	int i;

	clrscr();
	t(CYAN);
	g(3,3);cprintf("\nENTER BOOK ID TO SEARCH: ");
	scanf("%lu", &rollNumber);

	for (i = 0; i < count; i++) {
	    if (books[i].rollNumber == rollNumber) {

		t(LIGHTGREEN);
		g(3,15);printf("\nBOOK FOUND! \n");
		g(3,16);printf("\nNAME: %s", books[i].title);
		g(3,17);printf("\nBOOK ID: %lu", books[i].rollNumber);
		g(3,18);printf("\nPAGE: %.2d", books[i].page);

		return;
	    }
	}

	t(LIGHTRED);
	g(3,15);cprintf("BOOK With ID Number %lu Not Found!...\n", rollNumber);
	t(WHITE);
    } else {
	t(LIGHTRED);
	g(3,15);cprintf("No Book Records Available!...\n");
	t(WHITE);
    }
}

int main() {
    struct Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    clrscr();

    t(CYAN);
    g(1,1); printf("Ú-ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄTHE NPNG ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ-Ä¿");
    g(1,2); printf("³                                                                              ³");
    g(1,3); printf("³                                                                              ³");
    g(1,4); printf("³                                                                              ³");
    g(1,5); printf("³                                                                              ³");
    g(1,6); printf("³                                                                              ³");
    g(1,6); printf("³                                                                              ³");
    g(1,7); printf("³                                                                              ³");
    g(1,8); printf("³                                                                              ³");
    g(1,9); printf("³                                                                              ³");
    g(1,10);printf("³                                                                              ³");
    g(1,11);printf("³                                                                              ³");
    g(1,12);printf("³                                                                              ³");
    g(1,13);printf("³                                                                              ³");
    g(1,14);printf("³                                                                              ³");
    g(1,15);printf("³                                                                              ³");
    g(1,16);printf("³                                                                              ³");
    g(1,17);printf("³                                                                              ³");
    g(1,18);printf("³                                                                              ³");
    g(1,19);printf("³                                                                              ³");
    g(1,20);printf("³                                                                              ³");
    g(1,21);printf("³                                                                              ³");
    g(1,22);printf("³                                                                              ³");
    g(1,23);printf("³                                                                              ³");
    g(1,24);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

    do {

	t(CYAN);
	g(2,2);cprintf(" ENTER YOUR CHOICE: ");
	g(2,3); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	g(2,4); cprintf("³    LIBRARY MANAGEMENT SYSTEM    ³");
	g(2,5); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	g(2,6); cprintf("³        [1] ADD BOOK:            ³");
	g(2,7); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	g(2,8); cprintf("³        [2] DISPLAY BOOKS:       ³");
	g(2,9); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	g(2,10); cprintf("³        [3] SEARCH BOOK:         ³");
	g(2,11); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	g(2,12); cprintf("³        [4] EXIT                 ³");
	g(2,13); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
	g(21,2);
	scanf("%d", &choice);

	switch (choice) {
	    case 1:
		addBook(books, &bookCount);
		break;
	    case 2:
		clrscr();
		displayBooks(books, bookCount);
		break;
	    case 3:
		searchBook(books, bookCount);
		break;
	    case 4:
		t(LIGHTRED+BLINK);
		printf("\nEXITING THE PROGRAM!...");
		break;
	    default:
		t(LIGHTRED+BLINK);
		g(3,13);cprintf("\nINVALID CHOICE!... Please Enter A Valid Option.\n");
		t(WHITE);
	}

    } while (choice != 4);

    return 0;
}
