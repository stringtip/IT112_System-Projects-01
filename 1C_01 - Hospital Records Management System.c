#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

struct Patient {
    char name[50];
    int age;
    char diagnosis[100];
};

void clearScreen();
void displayMenu();
void admitPatient(struct Patient patients[], int *numPatients);
void displayPatients(struct Patient patients[], int numPatients);
void dischargePatient(struct Patient patients[], int *numPatients);

int main() {
    struct Patient Patients[MAX_PATIENTS];
    int numPatients = 0;
    int choice;

    do {
        clearScreen();
        displayMenu();

        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                admitPatient(Patients, &numPatients);
                break;
            case 2:
                displayPatients(Patients, numPatients);
                break;
            case 3:
                dischargePatient(Patients, &numPatients);
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

void clearScreen() {
    clrscr();
}

void displayMenu() {
    printf("HOSPITAL MANAGEMENT SYSTEM\n");
    printf("[1] Admit Patient\n");
    printf("[2] Display Patients\n");
    printf("[3] Discharge Patient\n");
    printf("[4] Exit\n");
}

void admitPatient(struct Patient patients[], int *numPatients) {
    if (*numPatients < MAX_PATIENTS) {
        printf("ADMIT PATIENT\n");
        printf("Enter name: ");
        scanf("%s", patients[*numPatients].name);

        printf("Enter age: ");
        scanf("%d", &patients[*numPatients].age);

        printf("Enter diagnosis: ");
        scanf("%s", patients[*numPatients].diagnosis);

        (*numPatients)++;

        printf("Patient admitted successfully!\n");
    } else {
        printf("Hospital is full. Cannot admit more patients.\n");
    }

    printf("Press any key to continue...");
    getch();
}

void displayPatients(struct Patient patients[], int numPatients) {
    int i;
    clrscr();

    printf("PATIENTS\n");

    for (i = 0; i < numPatients; ++i) {
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Diagnosis: %s\n", patients[i].diagnosis);
        printf("---------------------------\n");
    }

    printf("Press any key to continue...");
    getch();
}

void dischargePatient(struct Patient patients[], int *numPatients) {
    if (*numPatients > 0) {
	char searchName[50];
	 int found = 0;
	 int i;
	 int j;
	displayPatients(patients, *numPatients);

	printf("Enter the name of the patient to discharge: ");
	scanf("%s", searchName);


	for ( i = 0; i < *numPatients; i++) {
	    if (strcmp(searchName, patients[i].name) == 0) {
		found = 1;

		// Remove the discharged patient by shifting remaining patients
		for ( j = i; j < *numPatients - 1; j++) {
		    strcpy(patients[j].name, patients[j + 1].name);
		    patients[j].age = patients[j + 1].age;
		    strcpy(patients[j].diagnosis, patients[j + 1].diagnosis);
		}

		(*numPatients)--;
                printf("Patient discharged successfully!\n");
                break;
            }
        }

        if (!found) {
            printf("Patient not found!\n");
        }
    } else {
        printf("No patients available to discharge.\n");
    }

    printf("Press any key to continue...");
    getch();
}