#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    int IdNumber;
    float salary;
};

void addEmployee(struct Employee employees[], int *count) {
    if (*count < MAX_EMPLOYEES) {
	struct Employee newEmployee;

	gotoxy(30,3);
	printf("EMPLOYEE DETAILS");
	gotoxy(25,6);
	printf("Enter employee name: ");delay(100);
	scanf("%s", newEmployee.name);
	gotoxy(25,6);
	cprintf("\nEnter Id number: ");delay(100);
	scanf("%d", newEmployee.IdNumber);
	gotoxy(25,7);
	cprintf("\nEnter Salary: ");delay(100);
	scanf("%f", &newEmployee.salary);

	employees[*count] = newEmployee;
	(*count)++;

       printf("\nEmployee added successfully.\n");
	clrscr();
    } else {
	cprintf("Maximum number of employee reached.\n");
    }
}

void displayEmployee(struct Employee employees[], int count) {
    int i;
    if (count > 0) {
	printf("Employee Records:\n");
	printf("-------------------------------------------------");
	printf("\n| %-20s | %-10s | %-5s   |\n", "Name", "Id Number", "Salary");
	printf("-------------------------------------------------");

	for ( i = 0; i < count; i++) {
	    printf("\n| %-20s | %-12d | %-5.2f |\n", employees[i].name, employees[i].IdNumber, employees[i].salary);
	}

	printf("-------------------------------------------------");
    } else {
	printf("\nNo employee records available.\n");
    }
}

void searchEmployee(struct Employee employees[], int count) {
    int i;
    if (count > 0) {
	int IdNumber;
	gotoxy(25,3);
	cprintf("\nEnter Id number to search: ");
	scanf("%d", &IdNumber);

	for ( i = 0; i < count; i++) {
	    if (employees[i].IdNumber == IdNumber) {
		gotoxy(25,4);
		cprintf("\nEmployee found:\n");
		gotoxy(25,5);
		cprintf("Name: %s\n", employees[i].name);delay(100);
		gotoxy(25,6);
		cprintf("ID Number: %d\n", employees[i].IdNumber);delay(100);
		gotoxy(25,7);
		cprintf("Salary: %.2f\n", employees[i].salary);delay(100);
		return;
	    }
	}
	gotoxy(25,8);
	cprintf("\nEmployee with Id number %d not found.\n", IdNumber);
    } else {
	printf("\nNo employee records available.\n");
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    int choice;
    clrscr();



    do {
	textcolor(LIGHTBLUE);
		gotoxy(23,15);
	cprintf("Employee Record Management System");delay(1000);
		gotoxy(21,16);
	cprintf("------------------------------------");
	textcolor(LIGHTGREEN);
		gotoxy(30,17);
	cprintf("1. Add Employee");delay(1000);
		gotoxy(30,18);
	cprintf("2. Display Employee");delay(1000);
		gotoxy(30,19);
	cprintf("3. Search Employee");delay(1000);
		gotoxy(30,20);
	cprintf("4. Exit");delay(1000);
	textcolor(LIGHTBLUE);
	gotoxy(22,22);
	cprintf("==================================");
	gotoxy(25,23);
	textcolor(LIGHTGREEN);
	cprintf("Enter your choice:  ");delay(1000);
	scanf("%d", &choice);


	switch (choice) {
	    case 1:
		clrscr();
		addEmployee(employees, &employeeCount);
		break;
	    case 2:
		clrscr();
		displayEmployee(employees, employeeCount);
		break;
	    case 3:
		clrscr();
		searchEmployee(employees, employeeCount);
		break;
	    case 4:
		printf("Exiting the program. Goodbye!\n");
		return 0;
	    default:
		printf("Invalid choice. Please enter a valid option.\n");
	}
    } while (choice != 4);
    getch();
    return 0;
}