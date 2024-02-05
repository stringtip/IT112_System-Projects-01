#include<stdio.h>
#include<conio.h>

int main() {

    char hospitalName[100];
    char patientName[100];
    int daysAdmitted;
    float dailyRate = 200.0;
    float totalPayment;

    clrscr();

    printf("Enter the name of the hospital:");
    gets(hospitalName);

    printf("Enter patient name:");
    gets(patientName);

    printf("Enter days admitted:");
    scanf("%d", &daysAdmitted);

    totalPayment = daysAdmitted*dailyRate;

    textcolor(YELLOW);

   cprintf("\nHospital Name:%s", hospitalName);
   printf("\nPatient Name: %s", patientName);
   printf("\nDays Admitted:%d", daysAdmitted);
   printf("\nDaily Rate: $%.2f", dailyRate);
   printf("\nTotal Payment:$%.2f", totalPayment);

    getch();
    return 0;
}