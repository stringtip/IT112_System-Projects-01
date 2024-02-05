#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct library {
  char book_name[30];
  char author[30];

};
void drawLine() {
  for(int i = 0; i < 80; i++) {
     printf("-");
  }
  printf("\n");
}

int main() {
  struct library lib[100];
  int i = 0, j, choice;

  while(1) {
    system("cls");
    drawLine();
    printf("\t\tLibrary Management System\n");
    drawLine();
    printf("\n1.Add book\n");
    printf("2.Display books\n");
    printf("3.Exit\n");
    drawLine();
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
	printf("\nEnter book name: ");
	scanf("%s", lib[i].book_name);
	printf("Enter author name: ");
	scanf("%s", lib[i].author);
	i++;
	break;

      case 2:
	printf("\nBooks in library are:\n");
	drawLine();
	for(j=0; j<i; j++) {
	  printf("\nBook Name : %s", lib[i].book_name);
	  printf("\nAuthor Name : %s", lib[i].author);
	  printf("\n");
	  drawLine();
       }
       printf("\nPress any key to continue...");
       getch();
       break;

      case 3:

       exit(0);
    }
  }
  return 0;
}
