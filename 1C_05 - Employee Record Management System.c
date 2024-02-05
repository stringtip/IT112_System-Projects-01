#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define s scanf
#define g gotoxy
#define t textcolor
#define MAX_EMPLOYEES 100

struct Employee {
	int id;
	char name[50];
	char designation[50];
	char gender[10];
	char address[100];

};
int main() {
	struct Employee employees[MAX_EMPLOYEES];
	int numEmployees = 0;
	clrscr();

       while(1){
	int choice;
	t(CYAN);

		g(25,3); cprintf("����������������������������Ŀ");
		g(25,4); cprintf("�                            �");
		g(25,5); cprintf("�                            �");
		g(25,6); cprintf("����������������������������Ĵ");
		g(25,7); cprintf("�                            �");
		g(25,8); cprintf("�                            �");
		g(25,9); cprintf("�                            �");
	       g(25,10); cprintf("�                            �");
	       g(25,11); cprintf("�                            �");
	       g(25,12); cprintf("�                            �");
	       g(25,13); cprintf("�                            �");
	       g(25,14); cprintf("�                            �");
	       g(25,15); cprintf("�                            �");
	       g(25,15); cprintf("������������������������������");
	       t(CYAN);
	       g(28,20); cprintf("���������������������Ŀ");
	       g(28,21); cprintf("�                     �");
	       g(28,22); cprintf("�����������������������");








		t(YELLOW);
		g(30,5); cprintf("EMPLOYEE RECORD SYSTEM");
		t(MAGENTA);
		g(31,8); cprintf("[1]. ADD EMPLOYEE\n");
		g(31,10); cprintf("[2]. VIEW ALL EMPLOYEES");
		g(31,11); cprintf("\n[3]. EXIT");
		t(WHITE + BLINK);
		g(30,20); cprintf("\nEnter your choice: ");
		s("%d",&choice);
		clrscr();
		clrscr();



		switch (choice) {
			case 1:
			   if (numEmployees < MAX_EMPLOYEES) {

			   t(YELLOW);
			   clrscr();
			   g(21,2); printf("�������������������������������ͻ");
			   g(21,3); printf("�                               �");
			   g(21,4); printf("�������������������������������ͼ");
			   g(24,3); cprintf("ENTER DETAILS OF EMPLOYEE %d", numEmployees + 1);
			   g(21,6); printf("�������������������������������ͻ");
			   g(21,7); printf("�                               �");
			   g(21,8); printf("�                               �");
			   g(21,9); printf("�                               �");
			  g(21,10); printf("�                               �");
			  g(21,11); printf("�                               �");
			  g(21,12); printf("�������������������������������ͼ");



			      g(34,7);cprintf("ID: ");
			      s("%d", &employees[numEmployees].id);
			      g(32,8);cprintf("NAME: ");
			      s("%s", &employees[numEmployees].name);
			      g(29,9);cprintf("ADDRESS: ");
			      s("%s", &employees[numEmployees].address);
			      g(28,10);cprintf("POSITION: ");
			      s("%s", &employees[numEmployees].designation);
			      g(30,11);cprintf("GENDER: ");
			      s("%s", &employees[numEmployees].gender);
			      clrscr();

			   numEmployees++;
			  } else {
			     printf("MAXIMUM NUMBER OF EMPLOYEES REACHED\n");

			  }
			  break;
			case 2:

			  if (numEmployees > 0) {
			  int i;
			  t(CYAN);
			  clrscr();


				 g(1,10); printf("�������������������Ŀ");
				 g(1,11); printf("�                   �");
				 g(1,12); printf("�                   �");
				 g(1,13); printf("�                   �");
				 g(1,14); printf("�                   �");
				 g(1,15); printf("�                   �");
				 g(1,16); printf("�                   �");
				 g(1,17); printf("�                   �");
				 g(1,18); printf("���������������������");



			       t(YELLOW);




				  g(3,11);cprintf("EMPLOYEES DETAILS");
				  for (i = 0; i < numEmployees; i++) {
				  t(LIGHTGREEN);
				  g(4,12);cprintf("Employee: %d", i + 1);
				  g(10,13);cprintf("ID: %d", employees[i].id);
				  g(8,14);cprintf("NAME: %s", employees[i].name);
				  g(5,15);cprintf("ADDRESS: %s", employees[i].address);
				  g(4,16);cprintf("POSITION: %s", employees[i].designation);
				  g(6,17);cprintf("GENDER: %s", employees[i].gender);





			  }
			} else {
			   printf("No employees to display!\n");
			}
			break;
		case 3:
		   printf("Exiting...\n");
		   exit(0);
		default:
		  printf("Invalid choice: Please try again.\n");
	   }
	}

	getch();
	return 0;
}


