#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_EMPLOYEES 50
#define p printf
#define s scanf
#define g gotoxy
#define t textcolor
#define cp cprintf

struct Employee {
    char name[50];
    int id;
    float salary;
};

void addEmployee(struct Employee *employees, int *count);
void displayEmployees(struct Employee *employees, int count);
void searchEmployee(struct Employee *employees, int count, int searchId);



int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    
     while(1){
        t(GREEN);g(14,17);cp("--//Employee Record Management System//--");
        p("\n\n");
        sleep(1);
        t(YELLOW);
        cp("1. Add Employee\n");
        sleep(1);
        cp("2. Display Employees\n");
        sleep(1);
        cp("3. Search Employee\n");
        sleep(1);
        cp("4. Exit\n");
        sleep(1);
        t(WHITE);cp("\nEnter your choice: ");
        
        

        int choice;
        s("%d", &choice);

        switch (choice) {
            case 1:
                clrscr();
                t(GREEN);g(25,1);cp("--//Add Employee//--");
                p("\n\n");
                addEmployee(employees, &count);
                clrscr();
                p("%s added successfully..\n",employees);
                break;

            case 2:
                clrscr();
                t(GREEN);g(23,1);cp("--//Employee's Data//--");
                p("\n\n");
                displayEmployees(employees, count);
                break;

            case 3:
                clrscr();
                t(GREEN);g(25,1);cp("--//Search Employee//--");
                p("\n\n");
                t(WHITE);
                cp("Enter employee ID to search: ");
                int searchId;
                s("%d", &searchId);
                clrscr();;
                searchEmployee(employees, count, searchId);
                break;

            case 4:
                exit(0);

            default:
                p("Invalid choice. Please try again.\n");
        }
     }   
      /*  p("\nDo you want to continue? (y/n)");
        s("%s",&ans);
     
  /*  }while(ans != "y");*/
    getch();
    return 0;
}

void addEmployee(struct Employee *employees, int *count) {
    if (*count == MAX_EMPLOYEES) {
        p("Maximum number of employees reached.\n");
        return;
    }
    t(WHITE);
    cp("Enter employee name: ");
    s("%s", employees[*count].name);

    cp("Enter employee ID: ");
    s( "%d",&employees[*count].id);

    cp("Enter employee salary: ");
    s("%f", &employees[*count].salary);

    (*count)++;
    t(YELLOW);
    cp("Employee added successfully.\n");
}

void displayEmployees(struct Employee *employees, int count) {
    if (count == 0) {
        t(RED);
        cp("No employees in the system.\n");
        return;
    }
   t(YELLOW);
    cp("\nEmployee Details:\n");
    for (int i = 0; i < count; i++) {
        t(WHITE);
        cp("Name: %s\n", employees[i].name);
        cp("ID: %d\n", employees[i].id);
        cp("Salary: %.2f\n", employees[i].salary);
        p("------------------------\n");
    }
}

void searchEmployee(struct Employee *employees, int count, int searchId) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == searchId) {
            t(YELLOW);
            cp("\nEmployee found:\n");
            t(WHITE);
            cp("Name: %s\n", employees[i].name);
            cp("ID: %d\n", employees[i].id);
            cp("Salary: %.2f\n", employees[i].salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        t(RED);
        cp("Employee with ID %d not found.\n", searchId);
    }


    
};