#include<stdio.h>
#include<conio.h>

typedef struct {
int rollNumber;
char name[50];
float totalFees;
float feesPaid;
} Student;


void addStudent(Student *students, int *count)

 {  clrscr();
printf("Enter roll number: ");
scanf("%d", &(students[*count].rollNumber));

printf("Enter name: ");
scanf(" %[^\n]s", students[*count].name);

printf("Enter total fees: ");
scanf("%f", &(students[*count].totalFees));

students[*count].feesPaid = 0;

(*count)++;
}


void viewStudentInfo(Student *students, int count, int rollNumber) {
int i;
for (i = 0; i < count; i++) {
if (students[i].rollNumber == rollNumber) {
clrscr();
printf("Roll number: %d\n", students[i].rollNumber);
printf("Name: %s\tTotal fees: %.2f\t\tFees paid: %.2f\n", students[i].name,students[i].totalFees, students[i].feesPaid);
//printf("Total fees: %.2f\n", );
//printf("Fees paid: %.2f\n", students[i].feesPaid);
printf("Fees pending: %.2f\n", students[i].totalFees - students[i].feesPaid);
return;
}
}
clrscr();
printf("Student with roll number %d not found.\n", rollNumber);
}


void updateFeesPaid(Student *students, int count, int rollNumber) {
int i;
for (i = 0; i < count; i++) {            clrscr();
if (students[i].rollNumber == rollNumber) {
float amount;
printf("Enter amount to be paid: ");
scanf("%f", &amount);

if (students[i].feesPaid + amount > students[i].totalFees) {
printf("Amount entered exceeds total fees.\n");
return;
}

students[i].feesPaid += amount;
printf("Payment successful.\n");
return;
}
}

printf("Student with roll number %d not found.\n", rollNumber);
}


int main() {
int choice, rollNumber;
int count = 0;
Student students[100];
clrscr();

while (1) {

gotoxy(2,4);printf("ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
gotoxy(2,5);printf("บ                                                                           บ");
gotoxy(2,6);printf("ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
gotoxy(2,7);printf("บ                                                                           บ");
gotoxy(2,8);printf("บ                                                                           บ");
gotoxy(2,9);printf("บ                                                                           บ");
gotoxy(2,10);printf("บ                                                                           บ");
gotoxy(2,11);printf("บ                                                                           บ");
gotoxy(2,12);printf("บ                                                                           บ");
gotoxy(2,13);printf("บ                                                                           บ");
gotoxy(2,14);printf("บ                                                                           บ");
gotoxy(2,15);printf("บ                                                                           บ");
gotoxy(2,16);printf("บ                                                                           บ");
gotoxy(2,17);printf("บ                                                                           บ");
gotoxy(2,18);printf("บ                                                                           บ");
gotoxy(2,19);printf("บ                                                                           บ");
gotoxy(2,20);printf("บ                                                                           บ");
gotoxy(2,21);printf("บ                                                                           บ");
gotoxy(2,22);printf("บ                                                                           บ");
gotoxy(2,23);printf("บ                                                                           บ");
//gotoxy(2,); printf("บ                                                                          บ");
gotoxy(2,24);printf("ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");

gotoxy(30,5);printf("School Billing System");
gotoxy(30,8);printf("1. Add student\n");
gotoxy(30,10);printf("2. View student information\n");
gotoxy(30,12);printf("3. Update fees paid\n");
gotoxy(30,14);printf("4. Exit\n");
gotoxy(30,18);printf("Enter your choice: ");
scanf("%d", &choice);
clrscr();
switch (choice) {
case 1:
addStudent(students, &count);
break;
case 2:
printf("Enter roll number: ");
scanf("%d", &rollNumber);
viewStudentInfo(students, count, rollNumber);
break;
case 3:
printf("Enter roll number: ");
scanf("%d", &rollNumber);
updateFeesPaid(students, count, rollNumber);
break;
case 4:
exit(0);
default:
printf("Invalid choice.\n");
}
}
getch();
return 0;
}
