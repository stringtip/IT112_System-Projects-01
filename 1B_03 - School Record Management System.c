#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

struct Student schoolRecords[MAX_STUDENTS];
int totalStudents = 0;

void displayMenu() {
    system("cls");  // Clear the screen
    textcolor(RED);
    cprintf("\n============= Mobod Integrated School Record Management System =================\n");
    printf("1. Add Student Record\n");
    printf("2. Display All Records\n");
    printf("3. Search for a Student\n");
    printf("4. Modify Student Record\n");
    printf("5. Exit\n");
    cprintf("================================================================================\n");
}

void addStudent() {
     struct Student newStudent;
    if (totalStudents == MAX_STUDENTS) {
        printf("Error: Maximum limit reached. Cannot add more students.\n");
        return;
    }
    printf("\nEnter Student Details:\n");
    printf("Name: ");
    scanf("%s", newStudent.name);
    printf("Roll Number: ");
    scanf("%d", &newStudent.rollNumber);
    printf("Marks: ");
    scanf("%f", &newStudent.marks);

    schoolRecords[totalStudents++] = newStudent;

    printf("\nStudent record added successfully!\n");
    system("pause");
}

void displayAllRecords() {
    int i;
    if (totalStudents == 0) {
        printf("\nNo student records available.\n");
        system("pause");
        return;
    }

    printf("\nAll Student Records:\n");
    printf("| %-20s | %-12s | %-8s |\n", "Name", "Roll Number", "Marks");
    printf("|----------------------|--------------|---------|\n");

    for (i = 0; i < totalStudents; i++) {
        printf("| %-20s | %-12d | %-8.2f |\n", schoolRecords[i].name, schoolRecords[i].rollNumber, schoolRecords[i].marks);
    }

    system("pause");
}

void searchStudent() {
     int rollNumber, i;
    if (totalStudents == 0) {
        printf("\nNo student records available for searching.\n");
        system("pause");
        return;
    }


    printf("\nEnter the Roll Number to search: ");
    scanf("%d", &rollNumber);

    for (i = 0; i < totalStudents; i++) {
        if (schoolRecords[i].rollNumber == rollNumber) {
            printf("\nStudent Record Found:\n");
            printf("| %-20s | %-12s | %-8s |\n", "Name", "Roll Number", "Marks");
            printf("|----------------------|--------------|---------|\n");
            printf("| %-20s | %-12d | %-8.2f |\n", schoolRecords[i].name, schoolRecords[i].rollNumber, schoolRecords[i].marks);
            system("pause");
            return;
        }
    }

    printf("\nStudent with Roll Number %d not found.\n", rollNumber);
    system("pause");
}

void modifyStudent() {
    int rollNumber, choice, i;
    if (totalStudents == 0) {
        printf("\nNo student records available for modification.\n");
        system("pause");
        return;
    }

    printf("\nEnter the Roll Number of the student to modify: ");
    scanf("%d", &rollNumber);

    for (i = 0; i < totalStudents; i++) {
        if (schoolRecords[i].rollNumber == rollNumber) {
            printf("\nStudent Record Found:\n");
            printf("| %-20s | %-12s | %-8s |\n", "Name", "Roll Number", "Marks");
            printf("|----------------------|--------------|---------|\n");
            printf("| %-20s | %-12d | %-8.2f |\n", schoolRecords[i].name, schoolRecords[i].rollNumber, schoolRecords[i].marks);

            printf("\nSelect what you want to modify:\n");
            printf("1. Name\n");
            printf("2. Roll Number\n");
            printf("3. Marks\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Enter new name: ");
                    scanf("%s", schoolRecords[i].name);
                    break;
                case 2:
                    printf("Enter new roll number: ");
                    scanf("%d", &schoolRecords[i].rollNumber);
                    break;
                case 3:
                    printf("Enter new marks: ");
                    scanf("%f", &schoolRecords[i].marks);
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }

            printf("\nStudent record modified successfully!\n");
            system("pause");
            return;
        }
    }

    printf("\nStudent with Roll Number %d not found.\n", rollNumber);
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
                addStudent();
                break;
            case 2:
                displayAllRecords();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                modifyStudent();
                break;
            case 5:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);
    getch();
    return 0;
}
