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
    g(1,1); printf("�������������������������������������NO PAIN NO GAIN�������������������������������Ŀ");
    g(1,2); printf("�                                                                              �");
    g(1,3); printf("�                                                                              �");
    g(1,4); printf("�                                                                              �");
    g(1,5); printf("�                                                                              �");
    g(1,6); printf("�                                                                              �");
    g(1,6); printf("�                                                                              �");
    g(1,7); printf("�                                                                              �");
    g(1,8); printf("�                                                                              �");
    g(1,9); printf("�                                                                              �");
    g(1,10);printf("�                                                                              �");
    g(1,11);printf("�                                                                              �");
    g(1,12);printf("�                                                                              �");
    g(1,13);printf("�                                                                              �");
    g(1,14);printf("�                                                                              �");
    g(1,15);printf("�                                                                              �");
    g(1,16);printf("�                                                                              �");
    g(1,17);printf("�                                                                              �");
    g(1,18);printf("�                                                                              �");
    g(1,19);printf("�                                                                              �");
    g(1,20);printf("�                                                                              �");
    g(1,21);printf("�                                                                              �");
    g(1,22);printf("�                                                                              �");
    g(1,23);printf("�                                                                              �");
    g(1,24);printf("��������������������������������������������������������������������������������");
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
       g(2,16); printf("����������������������������������������--Ŀ");
       g(2,17); printf("�%-20s %-15s %-5s�","NAME","BOOK YEAR ","PAGES");
       g(2,18); printf("����������������������������������������--��");

       g(2,19); printf("�����������������������������������������-Ŀ");

	for (i = 0; i < count; i++) {
       g(2,20);printf("�%-20s %-15lu %-5.2d�", books[i].title, books[i].rollNumber, books[i].page);
	}

       g(2,21); printf("�����������������������������������������-��");

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
    g(1,1); printf("�-�����������������������������������THE NPNG �������������������������������-Ŀ");
    g(1,2); printf("�                                                                              �");
    g(1,3); printf("�                                                                              �");
    g(1,4); printf("�                                                                              �");
    g(1,5); printf("�                                                                              �");
    g(1,6); printf("�                                                                              �");
    g(1,6); printf("�                                                                              �");
    g(1,7); printf("�                                                                              �");
    g(1,8); printf("�                                                                              �");
    g(1,9); printf("�                                                                              �");
    g(1,10);printf("�                                                                              �");
    g(1,11);printf("�                                                                              �");
    g(1,12);printf("�                                                                              �");
    g(1,13);printf("�                                                                              �");
    g(1,14);printf("�                                                                              �");
    g(1,15);printf("�                                                                              �");
    g(1,16);printf("�                                                                              �");
    g(1,17);printf("�                                                                              �");
    g(1,18);printf("�                                                                              �");
    g(1,19);printf("�                                                                              �");
    g(1,20);printf("�                                                                              �");
    g(1,21);printf("�                                                                              �");
    g(1,22);printf("�                                                                              �");
    g(1,23);printf("�                                                                              �");
    g(1,24);printf("��������������������������������������������������������������������������������");

    do {

	t(CYAN);
	g(2,2);cprintf(" ENTER YOUR CHOICE: ");
	g(2,3); cprintf("���������������������������������Ŀ");
	g(2,4); cprintf("�    LIBRARY MANAGEMENT SYSTEM    �");
	g(2,5); cprintf("���������������������������������Ĵ");
	g(2,6); cprintf("�        [1] ADD BOOK:            �");
	g(2,7); cprintf("���������������������������������Ĵ");
	g(2,8); cprintf("�        [2] DISPLAY BOOKS:       �");
	g(2,9); cprintf("���������������������������������Ĵ");
	g(2,10); cprintf("�        [3] SEARCH BOOK:         �");
	g(2,11); cprintf("���������������������������������Ĵ");
	g(2,12); cprintf("�        [4] EXIT                 �");
	g(2,13); cprintf("�����������������������������������");
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
