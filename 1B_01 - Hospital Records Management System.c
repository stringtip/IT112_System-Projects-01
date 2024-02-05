#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
    char name[100];
    int patientID;
    int age;
    char gender[10];
    char diagnosis[100];
} Patient;

void addPatient(Patient patients[], int *numPatients)
{
	textcolor(GREEN);
	cprintf("\nEnter Patient name:");
	scanf("%s", patients[*numPatients].name);

	textcolor(GREEN);
	cprintf("Enter Patient Id:");
	scanf("%s", &patients[*numPatients].patientID);

	textcolor(GREEN);
	cprintf("Enter Patient Age:");
	scanf("%s", &patients[*numPatients].age);

	textcolor(GREEN);
	cprintf("Enter Patient Gender:");
	scanf("%s", patients[*numPatients].gender);

	textcolor(GREEN);
	cprintf("Enter Patient Diagnosis:");
	scanf("%s", patients[*numPatients].diagnosis);
	(*numPatients)++;
}

void displayPatients(Patient patients[], int numPatients) {
    int i;
    for (i = 0; i < numPatients; i++) {
	gotoxy(33,10);
	textcolor(BLINK + RED);
	cprintf("Name: %s\n", patients[i].name);

	gotoxy(33,9);
	textcolor(BLINK + RED);
	cprintf("ID: %s\n\n\n\n\n", patients[i].patientID);

	gotoxy(33,8);
	textcolor(BLINK + RED);
	cprintf("Age: %s\n\n\n\n", patients[i].age);

	gotoxy(33,7);
	textcolor(BLINK + RED);
	cprintf("Gender: %s\n\n\n", patients[i].gender);

	gotoxy(33,6);
	textcolor(BLINK + RED);
	cprintf("Diagnosis: %s\n\n", patients[i].diagnosis);
    }
}

Patient *searchPatient(Patient patients[], int numPatients, int patientID) {
    int i;
    for (i = 0; i < numPatients; i++) {
	if (patients[i].patientID == patientID) {
	    return &patients[i];
	}
    }
    return NULL;
}

int main() {
	Patient patients[100];
	int numPatients = 0;
	int choice, patientID;
	Patient *patient;
	while (1) {

	gotoxy(25,1);
	textcolor(YELLOW);
	cprintf("HOSPITAL RECORDS MANAGEMENT SYSTEM\n");

	printf("\n1. Add Patient:");

	printf("\n2. Display All Patients");

	printf("\n3. Search For Patient");

	printf("\n4. Exit");

	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	switch (choice) {
	    case 1:
		addPatient(patients, &numPatients);
		break;
	    case 2:
		displayPatients(patients, numPatients);
		break;
	    case 3:

		textcolor(CYAN);
		cprintf("\n Enter Patient id to search for:");
		scanf("%d", &patientID);

		patient = searchPatient(patients, numPatients, patientID);
		if (patient != NULL) {
		    printf("\n\t\tName: %s\n", patient->name);
		    printf("ID: %s\n", patient->patientID);
		    printf("Age: %s\n",patient->age);
		    printf("Gender: %s\n", patient->gender);
		    printf("Diagnosis: %s\n", patient->diagnosis);
		} else {
		    textcolor(BLINK + RED);
		    cprintf("Patient not found!\n");
		}
		break;
	    case 4:
		return 0;
	}
    }
}