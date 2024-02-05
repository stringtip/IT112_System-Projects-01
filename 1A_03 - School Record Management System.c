#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

#define p printf
#define s scanf
#define cp cprintf
#define g gotoxy
#define t textcolor
#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int IdNumber;
    float Grade;
};

void addStudent(struct Student students[], int *count) {
    if (*count < MAX_STUDENTS) {
	struct Student newStudent;

	t(LIGHTRED);
	g(2,1);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");
	g(2,2);cp("³                                                                           ³");
	g(2,3);cp("³                                                                           ³");
	g(2,4);cp("³                                                                           ³");
	g(2,5);cp("³                                                                           ³");
	g(2,6);cp("³                                                                           ³");
	g(2,7);cp("³                                                                           ³");
	g(2,8);cp("³                                                                           ³");
	g(2,9);cp("³                                                                           ³");
	g(2,10);cp("³                                                                           ³");
	g(2,11);cp("³                                                                           ³");
	g(2,12);cp("³                                                                           ³");
	g(2,13);cp("³                                                                           ³");
	g(2,14);cp("³                                                                           ³");
	g(2,15);cp("³                                                                           ³");
	g(2,16);cp("³                                                                           ³");
	g(2,17);cp("³                                                                           ³");
	g(2,18);cp("³                                                                           ³");
	g(2,19);cp("³                                                                           ³");
	g(2,20);cp("³                                                                           ³");
	g(2,21);cp("³                                                                           ³");
	g(2,22);cp("³                                                                           ³");
	g(2,23);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");

	t(LIGHTGREEN);g(27,1);
	cp("¯¯¯¯¯¶±±şAdd Studentsş±±Ç®®®®®");


	t(WHITE);g(10,4);
	cp("Enter student name: \a");
	s("%s", newStudent.name);

	g(10,5);
	cp("Enter ID number: \a");
	s("%d", &newStudent.IdNumber);

	g(10,6);
	cp("Enter General Grade: \a");
	s("%f", &newStudent.Grade);

	students[*count] = newStudent;
	(*count)++;

	t(GREEN + BLINK);g(5,22);
	cp("Student added successfully.");
    } else {
	t(RED + BLINK);g(5,24);
	cp("Maximum number of students reached.\n");
    }
}

void displayStudents(struct Student students[], int count) {
    if (count > 0) {
	int i,u;

	t(YELLOW);
	g(2,1);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");
	g(2,2);cp("³                                                                           ³");
	g(2,3);cp("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	g(2,4);cp("³                                                                           ³");
	g(2,5);cp("³                                                                           ³");
	g(2,6);cp("³                                                                           ³");
	g(2,7);cp("³                                                                           ³");
	g(2,8);cp("³                                                                           ³");
	g(2,9);cp("³                                                                           ³");
	g(2,10);cp("³                                                                           ³");
	g(2,11);cp("³                                                                           ³");
	g(2,12);cp("³                                                                           ³");
	g(2,13);cp("³                                                                           ³");
	g(2,14);cp("³                                                                           ³");
	g(2,15);cp("³                                                                           ³");
	g(2,16);cp("³                                                                           ³");
	g(2,17);cp("³                                                                           ³");
	g(2,18);cp("³                                                                           ³");
	g(2,19);cp("³                                                                           ³");
	g(2,20);cp("³                                                                           ³");
	g(2,21);cp("³                                                                           ³");
	g(2,22);cp("³                                                                           ³");
	g(2,23);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");

	t(LIGHTGREEN);g(25,1);
	cp("¯¯¯¯¯¶±±şDisplay Studentsş±±Ç®®®®®");

	t(WHITE);
	g(4,2);
	cp("%-35s  %-12s  %-10s ", "Name", "ID Number", "General Grade");


	for(u = 4;u <= count;u++);
	for (i = 0; i < count; i++) {
	    gotoxy(4,i+1*4);
	    p("%-35s  %-12d  %-10.2f", students[i].name, students[i].IdNumber, students[i].Grade);

       }
    } else {
	t(RED + BLINK);g(5,24);
	cp("No student records available.");
    }
}

void searchStudent(struct Student students[], int count) {
    if (count > 0) {
	int i,IdNumber;

	t(LIGHTRED);
	g(2,1);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");
	g(2,2);cp("³                                                                           ³");
	g(2,3);cp("³                                                                           ³");
	g(2,4);cp("³                                                                           ³");
	g(2,5);cp("³                                                                           ³");
	g(2,6);cp("³                                                                           ³");
	g(2,7);cp("³                                                                           ³");
	g(2,8);cp("³                                                                           ³");
	g(2,9);cp("³                                                                           ³");
	g(2,10);cp("³                                                                           ³");
	g(2,11);cp("³                                                                           ³");
	g(2,12);cp("³                                                                           ³");
	g(2,13);cp("³                                                                           ³");
	g(2,14);cp("³                                                                           ³");
	g(2,15);cp("³                                                                           ³");
	g(2,16);cp("³                                                                           ³");
	g(2,17);cp("³                                                                           ³");
	g(2,18);cp("³                                                                           ³");
	g(2,19);cp("³                                                                           ³");
	g(2,20);cp("³                                                                           ³");
	g(2,21);cp("³                                                                           ³");
	g(2,22);cp("³                                                                           ³");
	g(2,23);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");

	t(LIGHTGREEN);g(26,1);
	cp("¯¯¯¯¯¶±±şSearch Studentsş±±Ç®®®®®");

	t(WHITE);g(10,3);
	cp("Enter ID number to search: ");
	s("%d", &IdNumber);
	clrscr();

	for (i = 0; i < count; i++) {
	    if (students[i].IdNumber == IdNumber) {

	t(LIGHTGREEN);
	g(2,1);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");
	g(2,2);cp("³                                                                           ³");
	g(2,3);cp("³                                                                           ³");
	g(2,4);cp("³                                                                           ³");
	g(2,5);cp("³                                                                           ³");
	g(2,6);cp("³                                                                           ³");
	g(2,7);cp("³                                                                           ³");
	g(2,8);cp("³                                                                           ³");
	g(2,9);cp("³                                                                           ³");
	g(2,10);cp("³                                                                           ³");
	g(2,11);cp("³                                                                           ³");
	g(2,12);cp("³                                                                           ³");
	g(2,13);cp("³                                                                           ³");
	g(2,14);cp("³                                                                           ³");
	g(2,15);cp("³                                                                           ³");
	g(2,16);cp("³                                                                           ³");
	g(2,17);cp("³                                                                           ³");
	g(2,18);cp("³                                                                           ³");
	g(2,19);cp("³                                                                           ³");
	g(2,20);cp("³                                                                           ³");
	g(2,21);cp("³                                                                           ³");
	g(2,22);cp("³                                                                           ³");
	g(2,23);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");

		g(26,1);
		cp("¯¯¯¯¯¶±±şSearch Studentsş±±Ç®®®®®");

		t(YELLOW + BLINK);g(5,2);
		cp("Student found:\n");
		t(WHITE);
		g(10,4);
		cp("Name: %s\n", students[i].name);
		g(10,5);
		cp("ID Number: %d\n", students[i].IdNumber);
		g(10,6);
		cp("General Grade: %.2f\n", students[i].Grade);
		return;
	    }
	}

	t(RED + BLINK);g(5,24);
	cp("Student with ID number %d not found.\n", IdNumber);



    } else {
	t(RED + BLINK);g(5,24);
	cp("No student records available.\n");
    }
}

void removeStudent(struct Student students[], int *count) {
    if (*count > 0) {
	int removeIdNumber,i,found = 0;

	t(LIGHTRED);
	g(2,1);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");
	g(2,2);cp("³                                                                           ³");
	g(2,3);cp("³                                                                           ³");
	g(2,4);cp("³                                                                           ³");
	g(2,5);cp("³                                                                           ³");
	g(2,6);cp("³                                                                           ³");
	g(2,7);cp("³                                                                           ³");
	g(2,8);cp("³                                                                           ³");
	g(2,9);cp("³                                                                           ³");
	g(2,10);cp("³                                                                           ³");
	g(2,11);cp("³                                                                           ³");
	g(2,12);cp("³                                                                           ³");
	g(2,13);cp("³                                                                           ³");
	g(2,14);cp("³                                                                           ³");
	g(2,15);cp("³                                                                           ³");
	g(2,16);cp("³                                                                           ³");
	g(2,17);cp("³                                                                           ³");
	g(2,18);cp("³                                                                           ³");
	g(2,19);cp("³                                                                           ³");
	g(2,20);cp("³                                                                           ³");
	g(2,21);cp("³                                                                           ³");
	g(2,22);cp("³                                                                           ³");
	g(2,23);cp("şÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄş");

	g(25,1);t(LIGHTGREEN);
	cp("¯¯¯¯¯¶±±şRemove Studentsş±±Ç®®®®®");

	t(WHITE);g(10,4);
	cp("Enter ID number to remove: \a");
	s("%d", &removeIdNumber);

	for (i = 0; i < *count; i++) {
	    if (students[i].IdNumber == removeIdNumber) {
		found = 1;

		students[i] = students[*count - 1];
		(*count)--;
		t(YELLOW + BLINK);g(5,21);
		cp("\nStudent remove successfully.\n\a");
		break;
	    }
	}

	if (!found) {
	    t(RED + BLINK);g(5,24);
	    cp("Student with ID number %d not found.\n", removeIdNumber);
	}
    } else {
	t(RED + BLINK);g(5,24);
	cp("No student records available.\n");
    }
}

void loadingAnimation() {
    int i;
    char animationChars[] = {'>','\\'};

    g(5,24);t(GREEN);
    cp("Loading:");

    for (i = 0; i < 50; i++) {
	t(WHITE + BLINK);
	cp("%c", animationChars[i % 1]);
	fflush(stdout);
	delay(50);
	p("\a");
    }


}

void loadingAnimationS() {
    int i;
    char animationChars[] = {'|','/','-','\\'};

    for (i = 0; i < 10; i++) {
	t(WHITE + BLINK);
	cp("%c", animationChars[i % 4]);
	fflush(stdout);
	delay(100);
	p("\b");
    }


}

void exitsy(){

    int u;
    clrscr();
    for(u = 5; u >= 0; u--){

		      g(5,25);
		      t(RED);
		      delay(100);
		      cp("Exiting the system in [%d]s ...",u);
		      g(31,25);
		      loadingAnimationS();
		      g(32,25);
		      loadingAnimationS();
		      g(33,25);
		      loadingAnimationS();
	    }

}

void gotoxy(int x,int y){
    p("\033[%d;%dH",y,x);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;
    char answer[5];
    clrscr();

    do{

	loadingAnimation();
	clrscr();

	t(LIGHTGREEN);
	g(28,1);cp("------//The PROGS//------");
	t(YELLOW);
	g(25,2);cp("School Record Management System");

	g(2,1);cp("ÕÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¸");
	g(2,2);cp("³                                                                           ³");
	g(2,3);cp("³                                                                           ³");
	g(2,4);cp("³                                                                           ³");
	g(2,5);cp("³                                                                           ³");
	g(2,6);cp("³                                                                           ³");
	g(2,7);cp("³                                                                           ³");
	g(2,8);cp("³                                                                           ³");
	g(2,9);cp("³                                                                           ³");
	g(2,10);cp("³                                                                           ³");
	g(2,11);cp("³                                                                           ³");
	g(2,12);cp("³                                                                           ³");
	g(2,13);cp("³                                                                           ³");
	g(2,14);cp("³                                                                           ³");
	g(2,15);cp("³                                                                           ³");
	g(2,16);cp("³                                                                           ³");
	g(2,17);cp("³                                                                           ³");
	g(2,18);cp("³                                                                           ³");
	g(2,19);cp("³                                                                           ³");
	g(2,20);cp("³                                                                           ³");
	g(2,21);cp("³                                                                           ³");
	g(2,22);cp("ÔÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¾");


	t(LIGHTRED);
	g(24,4);cp("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	g(24,5);cp("³                              ³");
	g(24,6);cp("³                              ³");
	g(24,7);cp("³                              ³");
	g(24,8);cp("³                              ³");
	g(24,9);cp("³                              ³");
	g(24,10);cp("³                              ³");
	g(24,11);cp("³                              ³");
	g(24,12);cp("³                              ³");
	g(24,13);cp("³                              ³");
	g(24,14);cp("³                              ³");
	g(24,15);cp("³                              ³");
	g(24,16);cp("³                              ³");
	g(24,17);cp("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

	t(BLUE);
	g(23,3);cp("É                                »");
	g(23,18);cp("È                                ½");


	t(LIGHTGREEN);
	g(27,1);cp("¯¯¯¯¯¶±±şThe PROGSş±±Ç®®®®®");
	t(YELLOW);
	g(37,2);cp("BSIT-1A");


	t(YELLOW);
	g(29,5);cp("School Record ");
	g(35,6);cp("Management System");

	t(WHITE);g(29,8);
	cp("[1] Add Student");
	delay(100);g(29,9);
	cp("[2] Display Students");
	delay(100);g(29,10);
	cp("[3] Search Student");
	delay(100);g(29,11);
	cp("[4] Remove Student");
	delay(100);g(29,12);
	cp("[5] Exit");
	delay(100);


	t(YELLOW);g(26,16);
	cp("Enter your choice: ");
	s("%d", &choice);

	switch (choice) {
	    case 1:
		clrscr();
		t(LIGHTGREEN);
		addStudent(students, &studentCount);
		break;
	    case 2:
		clrscr();
		t(LIGHTGREEN);
		displayStudents(students, studentCount);
		break;
	    case 3:
		clrscr();t(LIGHTGREEN);
		searchStudent(students, studentCount);
		break;
	    case 4:
		clrscr();t(LIGHTGREEN);
		removeStudent(students, &studentCount);
		break;
	    case 5:
		exitsy();
		return 0;
	    default:
		t(RED + BLINK);g(5,24);
		cp("Invalid choice. Please enter a valid option.");
	}

	g(5,25);t(YELLOW);
	p("Do you want to continue?(Y/N): ");
	s("%s",answer);

	if((strcmp(answer,"N" ) == 0) || (strcmp(answer, "n") == 0)){

	   int i;
	   for(i = 5; i >= 0; i--){


	      g(5,25);
	      t(RED);
	      delay(100);
	      cp("Exiting the system in [%d]s ...",i);
	      g(31,25);
	      loadingAnimationS();

	   }

	   delay(1000);
	   return 0;
	}

    }while(strcmp(answer,"Y") != 0 && strcmp(answer, "N") != 0);

    getch();
    return 0;
}