#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void newfile();
void search();
void out();
void pay();
char store[70][10][20];
int no = 0;
int a = -1;

int checkDuplicateID(char id_number[]){
	int size = sizeof(store)/sizeof(store[0]);
	int res = 0;
	int i = 0;
	if(size == 0){
		return 0;
	}
	for (i = 0; i < size; i++){
		if (strcmp(store[i][2], id_number) == 0){
			res = 1;

		}
	}
	return res;
}
void newfile() {
	char name[20];
	char course[20];
	char id_number[20];
	char tuition[] = "8500";
	char athletic[] = "200";
	char computer[] = "1350";
	char development[] = "1750";
	char lab[] = "250";
	char library[] = "500";
	char schoolid[] = "85";
	int check = 0;
	printf("\n Enter name: ");
	scanf(" %[^\n]s", &name);
	printf(" Enter course: ");
	scanf(" %[^\n]s", &course);
	do {
		printf(" Enter ID number: ");
		scanf("%s", &id_number);
		check = checkDuplicateID(id_number);
		if (check == 1){
			printf("\nID Number Already Exist\n");
		}
	}while (check == 1);

	strcpy(store[no][0], name);
	strcpy(store[no][1], course);
	strcpy(store[no][2], id_number);
	strcpy(store[no][3], tuition);
	strcpy(store[no][4], athletic);
	strcpy(store[no][5], computer);
	strcpy(store[no][6], development);
	strcpy(store[no][7], lab);
	strcpy(store[no][8], library);
	strcpy(store[no][9], schoolid);
	++no;
}
void out(){
	int total = 0;
	int i;
	for(i = 3; i < 10; i++){
		int toint = atoi(store[a][i]);
		total += toint;
	}
	clrscr();

	textcolor(LIGHTMAGENTA);
	gotoxy(4,2); cprintf("_____________________________________");
	gotoxy(4,3); cprintf("|                                   |");
	gotoxy(4,4); cprintf("|                                   |");
	gotoxy(4,5); cprintf("|                                   |");
	gotoxy(4,6); cprintf("|                                   |");
	gotoxy(4,7); cprintf("|                                   |");
	gotoxy(4,8); cprintf("_____________________________________");

	textcolor(LIGHTMAGENTA);
	gotoxy(4,9);  cprintf("___________________________________________");
	gotoxy(4,10);  cprintf("|                                         |");
	gotoxy(4,11);  cprintf("|                                         |");
	gotoxy(4,12);  cprintf("|                                         |");
	gotoxy(4,13);  cprintf("|                                         |");
	gotoxy(4,14);  cprintf("|                                         |");
	gotoxy(4,15);  cprintf("|                                         |");
	gotoxy(4,16);  cprintf("|                                         |");
	gotoxy(4,17);  cprintf("|                                         |");
	gotoxy(4,18);  cprintf("|                                         |");
	gotoxy(4,19);  cprintf("|                                         |");
	gotoxy(4,20);  cprintf("___________________________________________");

	gotoxy(7,4); printf("Name:	%s", store[a][0]);
	gotoxy(7,5); printf("Course:	%s", store[a][1]);
	gotoxy(7,6); printf("ID Number: %s", store[a][2]);

	gotoxy(7,10); printf("Tuition Fee:\t\t%s", store[a][3]);
	gotoxy(7,12); printf("OTHER FEE:");
	gotoxy(7,13); printf("Athletic Fee:\t\t%s", store[a][4]);
	gotoxy(7,14); printf("Computer Fee:\t\t%s", store[a][5]);
	gotoxy(7,15); printf("Development Fee:\t\t%s", store[a][6]);
	gotoxy(7,16); printf("Laboratory Fee:\t\t%s", store[a][7]);
	gotoxy(7,17); printf("Library Fee:\t\t%s", store[a][8]);
	gotoxy(7,18); printf("School ID Fee:\t\t%s", store[a][9]);
	gotoxy(7,19); printf("        Total:\t\t%d", total);
	getch();
}

void search() {
	char find[100];
	int size = sizeof(store)/sizeof(store[0]);
	int i = 0;
	char ch;
	a = -1;
	do{
		textcolor(LIGHTMAGENTA);
		gotoxy(4,4); cprintf("---------------------------------------");
		gotoxy(4,5); cprintf("|                                      |");
		gotoxy(4,6); cprintf("---------------------------------------");

		gotoxy(6,5); printf("Enter ID Number: ");
		scanf("%s", &find);
		for (i = 0; i < size; i++){
			if (strcmp(store[i][2], find) == 0){
				a = i;
				break;

			 }
	      }
	      if(a == -1){
		textcolor(RED);
		gotoxy(4,8);  cprintf("---------------------------------");
		gotoxy(4,9);  cprintf("|                                |");
		gotoxy(4,10); cprintf("|                                |");
		gotoxy(4,11); cprintf("|                                |");
		gotoxy(4,12); cprintf("---------------------------------");

		gotoxy(6,9); printf("ID Number does not exist");
		gotoxy(6,9); printf("\n\tSearch Again? (y/n): ");
		scanf("%s", &ch);
	      }  else{
			out();
			break;
	      }
	}while (ch == 'y');
}
void pay(){
	char options[7][99] = {"Tuition fee","Athletic fee","Computer fee","Development fee","Laboratory fee","Library fee","School ID fee"};
	int choice3;
	int choice4;
	int fee;
	int i, j, k;
	int fees[7];
	int total = 0, cash, change = 0, total2 = 0;
	for(i = 3; i < 10; i++){
			int toint = atoi(store[a][i]);
			total2 += toint;
	}
	if(total2 == 0){
		textcolor(GREEN);
		gotoxy(6,22); cprintf("\nALL FEES HAVE BEEN PAID, PRESS ENTER TO GO BACK TO MAIN MENU");
		getch();
		return;
	}
	printf("\n\n\tPay specific fees or Pay Total");
	printf("\n\t[1] Specific Fees");
	printf("\n\t[2] Total Fee");
	getch();

	do{
		printf("\nENTER CHOICE: ");
		scanf("%d", &choice3);
		if(choice3 <= 0 || choice3 > 2){
			printf("\nNOT IN OPTIONS, PLEASE CHOOSE IN OPTION");
		}
	}while(choice3 <= 0 || choice3 > 2);
	if(choice3 == 1){
			printf("\n1. Tuition fee");
			printf("\n2. Athletic fee");
			printf("\n3. Computer fee");
			printf("\n4. Development fee");
			printf("\n5. Laboratory fee");
			printf("\n6. Library fee");
			printf("\n7. School ID fee");
			do{
				printf("\n\n How many fees are you planning to pay?: ");
				scanf("%d", &fee);
				printf("\nchoose the fees(one line with space, no duplicate): ");
				for(i = 0; i < fee; i++){
					int data = 0;
					scanf("%d", &choice4);
					fees[i] = choice4;
					printf("\n%s: %s", options[i], store[a][choice4+2]);
					data = atoi(store[a][choice4+2]);
					total += data;
				}
				if(total == 0){
					printf("\nPLEASE PICK FEES THAT HAS VALUE");
				}
			}while(total == 0);
			printf("\n\tTOTAL: %d", total);
			do{
				printf("\nCASH AMOUNT: ");
				scanf("%d", &cash);
				if(cash < total){
					printf("\nPLEASE PAY EXACT AMOUNT or HIGHER\n");
				}
			}while(cash < total);
			for(j = 0; j < fee; j++){
				strcpy(store[a][fees[j]+2], "0");
			}
			if(cash > total){
				change = cash - total;
				printf("\nYOUR CHANGE: %d", change);
				printf("\n\nTHANK YOU FOR PAYING");
				getch();
			}else{
				printf("\n\nEXACT AMOUNT PAID, THANK YOU FOR PAYING");
				getch();
			}

	}else{
		for(i = 3; i < 10; i++){
			int toint = atoi(store[a][i]);
			total += toint;
		}
		printf("\nTuition fee:		%s", store[a][3]);
		printf("\n\tAthletic Fee:	%s", store[a][4]);
		printf("\n\tComputer Fee:	%s", store[a][5]);
		printf("\n\tDevelopment Fee:	%s", store[a][6]);
		printf("\n\tLaboratory Fee:	%s", store[a][7]);
		printf("\n\tLibrary Fee:	%s", store[a][8]);
		printf("\n\tSchool ID Fee:	%s", store[a][9]);
		printf("\n\t       TOTAL;	%d", total);
		do{
			printf("\nCASH AMOUNT: ");
			scanf("%d", &cash);
			if(cash < total){
				printf("\nPLEASE PAY EXACT AMOUNT or HIGHER\n");
			}
		}while(cash < total);
		for(k = 3; k < 10; k++){
		   strcpy(store[a][k], "0");
		}
		if(cash > total){
			change = cash - total;
			printf("\nYOUR CHANGE: %d", change);
			printf("\n\nTHANK YOU FOR PAYING");
			getch();
		}else{
			printf("\n\nEXACT AMOUNT PAID, THANK YOU FOR PAYING");
			getch();
		}
	}
}

void main() {
	int opt = 0;
	clrscr();
	textcolor(LIGHTMAGENTA);
	gotoxy(4,5);  cprintf("-------------------------------");
	gotoxy(4,6);  cprintf("|                              |");
	gotoxy(4,7);  cprintf("|                              |");
	gotoxy(4,8);  cprintf("|                              |");
	gotoxy(4,9);  cprintf("|                              |");
	gotoxy(4,10); cprintf("--------------------------------");
	gotoxy(6,4);  cprintf("Choose An OPTION");
	gotoxy(6,6);  cprintf("[1] New Student");
	gotoxy(6,7);  cprintf("[2] Search Student");
	gotoxy(6,8);  cprintf("[3] Pay Student");
	gotoxy(6,9);  cprintf("[4] EXIT");
	do{
		printf("\n\n\n\tSelect your option: ");
		scanf("%d", &opt);
	}while(opt <= 0 || opt > 4);
	switch(opt){
		case 1:
			clrscr();
			newfile();
			main();
		case 2:
			clrscr();
			search();
			main();

		case 3:
			clrscr();
			search();
			pay();
			main();
		case 4:
			clrscr();
			printf("\nProject by the PowerPuff Girls");
			exit(1);
	}
	getch();
}

