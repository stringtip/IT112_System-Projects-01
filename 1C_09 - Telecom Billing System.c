#include<stdio.h>
#include<conio.h>


int main()
{
	 char name[50];
	 char number[50];
	 int prodes;
	 int choice;
	 float charge;
	 float price;

	 clrscr();
	 do
	 {
	 clrscr();
	 textcolor(BLUE);
	 gotoxy(23,10);  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	 gotoxy(23,11);  cprintf("º ²²²²²²                    ²²²²²² º");
	 gotoxy(23,12);  cprintf("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	 gotoxy(23,13);  cprintf("º                                  º");
	 gotoxy(23,14);  cprintf("º                                  º");
	 gotoxy(23,15);  cprintf("º                                  º");
	 gotoxy(23,16);  cprintf("º                                  º");
	 gotoxy(23,17);  cprintf("º                                  º");
	 gotoxy(23,18);  cprintf("º                                  º");
	 gotoxy(23,19);  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");

	 textcolor(MAGENTA);
	 gotoxy(32,11); cprintf("Choose a SIM below\n\n");

	 textcolor(CYAN);
	 gotoxy(27,13); cprintf("[1]. Globe.\n");
	 gotoxy(27,14); cprintf("[2]. Smart.\n");
	 gotoxy(27,15); cprintf("[3]. TNT.\n");
	 gotoxy(27,16); cprintf("[4]. Exit.\n");

	 textcolor(WHITE);
	 gotoxy(26,18); cprintf("Enter a choice: ");
	 scanf("%d", &choice);

	 clrscr();
	 switch(choice)
	 {
	  case 1:
		 textcolor(WHITE);
		 gotoxy(66,2); cprintf("ÉÍÍÍÍÍÍÍÍÍ»");
		 gotoxy(66,3); cprintf("º         º");
		 gotoxy(66,4); cprintf("ÈÍÍÍÍÍÍÍÍÍ¼");
		 textcolor(CYAN + BLINK);
		 gotoxy(69,3); cprintf("GLOBE");
		 textcolor(MAGENTA);
		 gotoxy(4,2); cprintf("ÖÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ·");
		 gotoxy(4,3); cprintf("º²²² TELECOM BILLING SYSTEM ²²²º");
		 gotoxy(4,4); cprintf("ÓÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ½");
		 textcolor(BLUE);
		 gotoxy(40,1); cprintf("ÉÍ                  Í»");
		 gotoxy(40,2); cprintf("                      ");
		 gotoxy(40,3); cprintf("                      ");
		 gotoxy(40,4); cprintf("ÈÍ                  Í¼");
		 textcolor(YELLOW);
		 gotoxy(42,2); cprintf("GROUP: RULE OF FOUR");
		 gotoxy(48,3); cprintf("BSIT-1C");

		 textcolor(BLUE);
		 gotoxy(2,5);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄ¿");
		 gotoxy(2,6);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,7);  cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄ´");
		 gotoxy(2,8);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,9);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,10); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,11); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,12); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,13); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,14); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,15); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,16); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÙ");

		 textcolor(WHITE);
		 gotoxy(3,6);  cprintf("Product Name");
		 gotoxy(18,6); cprintf("Product Description");
		 gotoxy(45,6); cprintf("EasySURF");
		 gotoxy(61,6); cprintf("CHARGE");
		 gotoxy(72,6); cprintf("Price");
		 textcolor(CYAN);
		 gotoxy(6,8);   cprintf("Globe");
		 gotoxy(20,8);  cprintf("Gloab ALoad 50");
		 gotoxy(46,8);  cprintf("EZ50");
		 gotoxy(63,8);  cprintf("5.0");
		 gotoxy(72,8);  cprintf("55.00");
		 gotoxy(6,9);   cprintf("Globe");
		 gotoxy(20,9);  cprintf("Globe Aload 75");
		 gotoxy(46,9);  cprintf("EZ75");
		 gotoxy(63,9);  cprintf("5.0");
		 gotoxy(72,9);  cprintf("75.00");
		 gotoxy(6,10);  cprintf("Globe");
		 gotoxy(20,10); cprintf("Globe Aload 90");
		 gotoxy(46,10); cprintf("EZ90");
		 gotoxy(63,10);	cprintf("5.0");
		 gotoxy(72,10);	cprintf("95.00");
		 gotoxy(6,11);	cprintf("Globe");
		 gotoxy(20,11);	cprintf("Globe Aload 99");
		 gotoxy(46,11);	cprintf("EZ99");
		 gotoxy(63,11);	cprintf("5.0");
		 gotoxy(72,11);	cprintf("95.00");
		 gotoxy(6,12);  cprintf("Globe");
		 gotoxy(20,12);	cprintf("Globe Aload 110");
		 gotoxy(46,12); cprintf("EZ110");
		 gotoxy(63,12);	cprintf("5.0");
		 gotoxy(72,12); cprintf("115.00");
		 gotoxy(6,13);	cprintf("Globe");
		 gotoxy(20,13); cprintf("Globe Aload 140");
		 gotoxy(46,13); cprintf("EZ140");
		 gotoxy(63,13); cprintf("5.0");
		 gotoxy(72,13); cprintf("145.00");
		 gotoxy(6,14); cprintf("Globe");
		 gotoxy(20,14); cprintf("Globe Aload 299");
		 gotoxy(46,14); cprintf("EZ299");
		 gotoxy(63,14); cprintf("5.0");
		 gotoxy(72,14); cprintf("299.00");
		 gotoxy(6,15);  cprintf("Globe");
		 gotoxy(20,15); cprintf("Globe Aload 599");
		 gotoxy(46,15); cprintf("EZ599");
		 gotoxy(63,15); cprintf("5.0");
		 gotoxy(72,15); cprintf("604.00");

		 textcolor(YELLOW);
		 gotoxy(2,18); cprintf("Please Input the following Information");
		 gotoxy(2,19); cprintf("Phone No.          : "); scanf("%s",&number);
		 gotoxy(2,20); cprintf("Enter Name         : "); scanf("%s",&name);
		 gotoxy(2,21); cprintf("Enter Product Des. : "); scanf("%d",&prodes);

		 if(prodes <= 599) {
				    charge = 5.00;
				    price = prodes + charge;
		 }
		 else
		 {
		   textcolor(RED + BLINK);
		   gotoxy(26,23); cprintf("INVALID INPUT");
		   price = 0.0;
		   charge = 0.0;
		   prodes = 0;
		 }

		 textbackground(CYAN);
		 textcolor(RED);
		 gotoxy(42,17); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
		 gotoxy(42,18); cprintf("³²²²²²²²²²²²           ²²²²²²²²²²²²³");
		 gotoxy(42,19); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
		 gotoxy(42,20); cprintf("³                                  ³");
		 gotoxy(42,21); cprintf("³                                  ³");
		 gotoxy(42,22); cprintf("³                                  ³");
		 gotoxy(42,23); cprintf("³                                  ³");
		 gotoxy(42,24); cprintf("³                                  ³");
		 gotoxy(42,25); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

		 textcolor(MAGENTA);
		 gotoxy(54,18); cprintf(" ® GLOBE ¯ ");
		 gotoxy(45,20); cprintf("Phone No.         :%s",number);
		 gotoxy(45,21); cprintf("Name              :%s",name);
		 gotoxy(45,22); cprintf("Registered        :EZ%d",prodes);
		 gotoxy(45,23); cprintf("Charge            :%.2f",charge);
		 gotoxy(45,24); cprintf("The Total Amount  :%.2f",price);
		 gotoxy(80,25);
		 break;

	  case 2:
		 textcolor(MAGENTA);
		 gotoxy(6,2); cprintf("ÖÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÒÄÄÄÄÄÄÄÄÄÄÄÄÄÄ·");
		 gotoxy(6,3); cprintf("ÌÍÍÍÍTELECOM BILLING SYSTEMÍÍÍÍ¹");
		 gotoxy(6,4); cprintf("ÓÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄĞÄÄÄÄÄÄÄÄÄÄÄÄÄÄ½");
		 textcolor(BLUE);
		 gotoxy(41,1); cprintf("ÉÍ                  Í»");
		 gotoxy(41,2); cprintf("                      ");
		 gotoxy(41,3); cprintf("                      ");
		 gotoxy(41,4); cprintf("ÈÍ                  Í¼");
		 textcolor(YELLOW);
		 gotoxy(43,2); cprintf("GROUP: RULE OF FOUR");
		 gotoxy(49,3); cprintf("BSIT-1C");
		 textcolor(WHITE);
		 gotoxy(66,2); cprintf("ÉÍÍÍÍÍÍÍÍÍ»");
		 gotoxy(66,3); cprintf("º         º");
		 gotoxy(66,4); cprintf("ÈÍÍÍÍÍÍÍÍÍ¼");

		 textcolor(GREEN + BLINK);
		 gotoxy(69,3); cprintf("SMART");

		 textcolor(GREEN);
		 gotoxy(2,5);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄ¿");
		 gotoxy(2,6);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,7);  cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄ´");
		 gotoxy(2,8);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,9);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,10); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,11); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,12); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÙ");

		 textcolor(WHITE);
		 gotoxy(3,6);  cprintf("Product Name");
		 gotoxy(18,6); cprintf("Product Description");
		 gotoxy(44,6); cprintf("UNLI DATA");
		 gotoxy(61,6); cprintf("CHARGE");
		 gotoxy(72,6); cprintf("Price");
		 textcolor(CYAN);
		 gotoxy(6,8);   cprintf("Smart");
		 gotoxy(20,8);  cprintf("Smart Aload 199");
		 gotoxy(44,8);  cprintf("UNLIDATA199");
		 gotoxy(63,8);  cprintf("5.0");
		 gotoxy(72,8);  cprintf("204.00");
		 gotoxy(6,9);   cprintf("Smart");
		 gotoxy(20,9);  cprintf("Smart Aload 599");
		 gotoxy(44,9);  cprintf("UNLIDATA599");
		 gotoxy(63,9);  cprintf("5.0");
		 gotoxy(72,9);  cprintf("604.00");
		 gotoxy(6,10);  cprintf("Smart");
		 gotoxy(20,10); cprintf("Smart Aload 999");
		 gotoxy(44,10); cprintf("UNLIDATA999");
		 gotoxy(63,10); cprintf("5.0");
		 gotoxy(71,10); cprintf("1004.00");
		 gotoxy(6,11);  cprintf("Smart");
		 gotoxy(20,11); cprintf("Smart Aload 1199");
		 gotoxy(44,11); cprintf("UNLIDATA1199");
		 gotoxy(63,11); cprintf("5.0");
		 gotoxy(71,11); cprintf("1204.00");

		 textcolor(YELLOW);
		 gotoxy(2,13); cprintf("Please Input the following Information\n");
		 gotoxy(2,14); cprintf("Phone No.          : "); scanf("%s",&number);
		 gotoxy(2,15); cprintf("Enter Name         : "); scanf("%s",&name);
		 gotoxy(2,16); cprintf("Enter Product Des. : "); scanf("%d",&prodes);

		 if(prodes <= 1199) {
				    charge = 5.00;
				    price = prodes + charge;
		 }
		 else
		 {
		   textcolor(RED + BLINK);
		   gotoxy(65,24); cprintf("INVALID INPUT");
		   price = 0.0;
		   charge = 0.0;
		   prodes = 0;
		 }

		 textbackground(GREEN);
		 textcolor(YELLOW);
		 gotoxy(42,14); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
		 gotoxy(42,15); cprintf("³²²²²²²²²²²²²         ²²²²²²²²²²²²²³");
		 gotoxy(42,16); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
		 gotoxy(42,17); cprintf("³                                  ³");
		 gotoxy(42,18); cprintf("³                                  ³");
		 gotoxy(42,19); cprintf("³                                  ³");
		 gotoxy(42,20); cprintf("³                                  ³");
		 gotoxy(42,21); cprintf("³                                  ³");
		 gotoxy(42,22); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

		 textcolor(WHITE);
		 gotoxy(55,15); cprintf("® SMART ¯");
		 gotoxy(45,17); cprintf("Phone No.         :%s",number);
		 gotoxy(45,18); cprintf("Name              :%s",name);
		 gotoxy(45,19); cprintf("Registered        :UNLIDATA%d",prodes);
		 gotoxy(45,20); cprintf("Charge            :%.2f",charge);
		 gotoxy(45,21); cprintf("The Total Amount  :%.2f",price);
		 gotoxy(80,25);
		 break;

	  case 3:
		 textcolor(MAGENTA);
		 gotoxy(6,2); cprintf("ÕÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¸");
		 gotoxy(6,3); cprintf("ÆÍÍÍ¯TELECOM BILLING SYSTEM®ÍÍÍµ");
		 gotoxy(6,4); cprintf("ÔÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¾");
		 textcolor(BLUE);
		 gotoxy(42,1); cprintf("ÉÍ                  Í»");
		 gotoxy(42,2); cprintf("                      ");
		 gotoxy(42,3); cprintf("                      ");
		 gotoxy(42,4); cprintf("ÈÍ                  Í¼");
		 textcolor(YELLOW);
		 gotoxy(44,2); cprintf("GROUP: RULE OF FOUR");
		 gotoxy(50,3); cprintf("BSIT-1C");
		 textcolor(WHITE);
		 gotoxy(66,2); cprintf("ÉÍÍÍÍÍÍÍÍÍ»");
		 gotoxy(66,3); cprintf("º         º");
		 gotoxy(66,4); cprintf("ÈÍÍÍÍÍÍÍÍÍ¼");
		 textcolor(YELLOW + BLINK);
		 gotoxy(68,3); cprintf("® TNT ¯");

		 textcolor(CYAN);
		 gotoxy(2,5);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄ¿");
		 gotoxy(2,6);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,7);  cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄ´");
		 gotoxy(2,8);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,9);  cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,10); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,11); cprintf("³            ³                       ³                  ³          ³         ³");
		 gotoxy(2,12); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÙ");

		 textcolor(WHITE);
		 gotoxy(3,6);  cprintf("Product Name");
		 gotoxy(18,6); cprintf("Product Description");
		 gotoxy(44,6); cprintf("GIGA");
		 gotoxy(61,6); cprintf("CHARGE");
		 gotoxy(72,6); cprintf("Price");
		 textcolor(MAGENTA);
		 gotoxy(6,8);   cprintf("TNT");
		 gotoxy(20,8);  cprintf("TNT Aload 199");
		 gotoxy(44,8);  cprintf("GIGA199");
		 gotoxy(63,8);  cprintf("5.0");
		 gotoxy(72,8);  cprintf("204.00");
		 gotoxy(6,9);   cprintf("TNT");
		 gotoxy(20,9);  cprintf("TNT Aload 599");
		 gotoxy(44,9);  cprintf("GIGA599");
		 gotoxy(63,9);  cprintf("5.0");
		 gotoxy(72,9);  cprintf("604.00");
		 gotoxy(6,10);  cprintf("TNT");
		 gotoxy(20,10); cprintf("TNT Aload 999");
		 gotoxy(44,10); cprintf("GIGA999");
		 gotoxy(63,10); cprintf("5.0");
		 gotoxy(71,10); cprintf("1004.00");
		 gotoxy(6,11);  cprintf("TNT");
		 gotoxy(20,11); cprintf("TNT Aload 1199");
		 gotoxy(44,11); cprintf("GIGA1199");
		 gotoxy(63,11); cprintf("5.0");
		 gotoxy(71,11); cprintf("1204.00");

		 textcolor(YELLOW);
		 gotoxy(2,14); cprintf("Please Input the following Information");
		 gotoxy(2,15); cprintf("Phone No.          : "); scanf("%s",&number);
		 gotoxy(2,16); cprintf("Enter Name         : "); scanf("%s",&name);
		 gotoxy(2,17); cprintf("Enter Product Des. : "); scanf("%d",&prodes);

		 if(prodes <= 1199) {
				    charge = 5.00;
				    price = prodes + charge;
		 }
		 else
		 {
		   textcolor(RED + BLINK);
		   gotoxy(65,24); cprintf("INVALID INPUT");
		   price = 0.0;
		   charge = 0.0;
		   prodes = 0;
		 }

		 textbackground(RED);
		 textcolor(YELLOW);
		 gotoxy(42,14); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
		 gotoxy(42,15); cprintf("³²²²²²²²²²²²²         ²²²²²²²²²²²²²³");
		 gotoxy(42,16); cprintf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
		 gotoxy(42,17); cprintf("³                                  ³");
		 gotoxy(42,18); cprintf("³                                  ³");
		 gotoxy(42,19); cprintf("³                                  ³");
		 gotoxy(42,20); cprintf("³                                  ³");
		 gotoxy(42,21); cprintf("³                                  ³");
		 gotoxy(42,22); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

		 textcolor(WHITE);
		 gotoxy(56,15); cprintf("® TNT ¯");
		 gotoxy(45,17); cprintf("Phone No.         :%s",number);
		 gotoxy(45,18); cprintf("Name              :%s",name);
		 gotoxy(45,19); cprintf("Registered        :Go%d",prodes);
		 gotoxy(45,20); cprintf("Charge            :%.2f",charge);
		 gotoxy(45,21); cprintf("The Total Amount  :%.2f",price);
		 gotoxy(80,22);
		 break;

	  case 4:
		  textcolor(YELLOW);
		  gotoxy(27,12); cprintf("Exiting the program. Goodbye!\n");
		  break;

	  default:
		  textcolor(RED + BLINK);
		  gotoxy(34,12); cprintf("Invalid Choice");
		  gotoxy(80,25);
	  }
	  textbackground(0);
	  textcolor(WHITE);
	  gotoxy(2,23); cprintf("Press 'q' to quit ");
	  gotoxy(2,24); cprintf("or any key to continue");
	  choice = getch();
	  }while(choice != 'q');
	  textbackground(0);


		getch();
		return 0;
}