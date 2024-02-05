#include<stdio.h>
#include<conio.h>
#include<string.h>
#define p printf
#define s scanf
int main()
{

	float a,b,c;
	char d;
	float balance = 100000;
	int account,f;
	int type;
	int transaction=1;
	char c1,c2,c3,c4;
	clrscr();
	textcolor(YELLOW);
	gotoxy(30,12);cprintf("BANK MANAGEMENT SYSTEM");
	textcolor(RED + BLINK);
	gotoxy(25,22);cprintf("PRESS [0] AND ENTER TO CONTINUE");
	gotoxy(39,24);cprintf("[   ]");
	gotoxy(40,24);p(" ");
	s("%c",&d);
	clrscr();
	textcolor(CYAN);
	gotoxy(24,7);cprintf(" _____  __  _     ___               ");
	gotoxy(24,8);cprintf("|___ /  \\ \\( )__ ( _ )  _ __ ___   ");
	gotoxy(24,9);cprintf("  |_ \\   \\ \\/ __|/ _ \\/\\ '_ ` _ \\   ");
	gotoxy(24,10);cprintf(" ___) /\\_/ /\\__ \\ (_>  < | | | | |  ");
	gotoxy(24,11);cprintf("|____/\\___/ |___/\\___/\\/_| |_| |_|  ");
	textcolor(WHITE);
	gotoxy(30,13);cprintf("WELCOME TO 3J's & M ");
	gotoxy(33,14);cprintf("BANKING SYSTEM");
	textcolor(RED + BLINK);
	gotoxy(25,22);cprintf("PRESS [0] AND ENTER TO CONTINUE");
	gotoxy(39,24);cprintf("[   ]");
	gotoxy(40,24);p(" ");
	s("%d",&f);
	clrscr();
	textcolor(CYAN);
	gotoxy(2,1);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
	gotoxy(2,2);   cprintf("≥                                                                            ≥");
	gotoxy(2,3);   cprintf("≥                                                                            ≥");
	gotoxy(2,4);   cprintf("≥                                                                            ≥");
	gotoxy(2,6);   cprintf("≥                                                                            ≥");
	gotoxy(2,7);   cprintf("≥                                                                            ≥");
	gotoxy(2,8);   cprintf("≥                                                                            ≥");
	gotoxy(2,9);   cprintf("≥                                                                            ≥");
	gotoxy(2,10);  cprintf("≥                                                                            ≥");
	gotoxy(2,11);  cprintf("≥                                                                            ≥");
	gotoxy(2,12);  cprintf("≥                                                                            ≥");
	gotoxy(2,13);  cprintf("≥                                                                            ≥");
	gotoxy(2,14);  cprintf("≥                                                                            ≥");
	gotoxy(2,15);  cprintf("≥                                                                            ≥");
	gotoxy(2,16);  cprintf("≥                                                                            ≥");
	gotoxy(2,17);  cprintf("≥                                                                            ≥");
	gotoxy(2,18);  cprintf("≥                                                                            ≥");
	gotoxy(2,19);  cprintf("≥                                                                            ≥");
	gotoxy(2,20);  cprintf("≥                                                                            ≥");
	gotoxy(2,21);  cprintf("≥                                                                            ≥");
	gotoxy(2,22);  cprintf("≥                                                                            ≥");
	gotoxy(2,23);  cprintf("≥                                                                            ≥");
	gotoxy(2,24);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
	gotoxy(2,5);   cprintf("≥                                                                            ≥");
	gotoxy(35,4);p("3J's & M BANK");
	pin:
	textcolor(WHITE);
	gotoxy(20,11);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
	gotoxy(20,12);   cprintf("≥                                        ≥");
	gotoxy(20,13);   cprintf("√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥");
	gotoxy(20,14);   cprintf("≥                                        ≥");
	gotoxy(20,15);   cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
	gotoxy(22,12);   cprintf("ACCOUNT NO.    :      ");
	gotoxy(22,14);	 cprintf("PIN            :      ");
	gotoxy(45,12);  printf(" ");
	scanf("%d",&type);
	gotoxy(45,14);  printf(" ");
	c1=getch();
	printf("*");
	c2=getch();
	printf("*");
	c3=getch();
	printf("*");
	c4=getch();
	printf("*");
	if(type==2004)
	{
		if(c1=='1',c2=='0',c3=='1',c4=='7')
		{
			clrscr();
			while(transaction==1)
			{
				int option;
				textcolor(CYAN);
				gotoxy(2,1);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
				gotoxy(2,2);   cprintf("≥                                                                            ≥");
				gotoxy(2,3);   cprintf("≥                                                                            ≥");
				gotoxy(2,4);   cprintf("≥                                                                            ≥");
				gotoxy(2,5);   cprintf("√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥");
				gotoxy(2,6);   cprintf("≥                                                                            ≥");
				gotoxy(2,7);   cprintf("≥                                                                            ≥");
				gotoxy(2,8);   cprintf("≥                                                                            ≥");
				gotoxy(2,9);   cprintf("≥                                                                            ≥");
				gotoxy(2,10);  cprintf("≥                                                                            ≥");
				gotoxy(2,11);  cprintf("≥                                                                            ≥");
				gotoxy(2,12);  cprintf("≥                                                                            ≥");
				gotoxy(2,13);  cprintf("≥                                                                            ≥");
				gotoxy(2,14);  cprintf("≥                                                                            ≥");
				gotoxy(2,15);  cprintf("≥                                                                            ≥");
				gotoxy(2,16);  cprintf("≥                                                                            ≥");
				gotoxy(2,17);  cprintf("≥                                                                            ≥");
				gotoxy(2,18);  cprintf("≥                                                                            ≥");
				gotoxy(2,19);  cprintf("≥                                                                            ≥");
				gotoxy(2,20);  cprintf("≥                                                                            ≥");
				gotoxy(2,21);  cprintf("≥                                                                            ≥");
				gotoxy(2,22);  cprintf("≥                                                                            ≥");
				gotoxy(2,23);  cprintf("≥                                                                            ≥");
				gotoxy(2,24);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
				gotoxy(38,15); cprintf("⁄ƒƒƒƒƒø");
				gotoxy(38,16); cprintf("≥     ≥");
				gotoxy(38,17); cprintf("¿ƒƒƒƒƒŸ");
				textcolor(YELLOW);
				gotoxy(33,3); cprintf("3J's & M BANK");
				textcolor(MAGENTA);
				gotoxy(24,10);cprintf("Press [1] and Enter - Balance Inquiry");
				gotoxy(24,11);cprintf("Press [2] and Enter - Deposit");
				gotoxy(24,12);cprintf("Press [3] and Enter - Withdraw");
				gotoxy(24,13);cprintf("Press [4] and Enter - Transfer");
				gotoxy(39,16);p("  ");
				scanf("%d",&option);
				clrscr();
				switch(option)
				{
					case 1 :
					textcolor(YELLOW);
					gotoxy(11,5);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,6);   cprintf("≥                                                          ≥");
					gotoxy(11,7);   cprintf("√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥");
					gotoxy(11,8);   cprintf("≥                                                          ≥");
					gotoxy(11,9);   cprintf("≥                                                          ≥");
					gotoxy(11,10);  cprintf("≥                                                          ≥");
					gotoxy(11,11);  cprintf("≥                                                          ≥");
					gotoxy(11,12);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
					textcolor(MAGENTA);
					gotoxy(33,6);  cprintf("BALANCE INQUIRY");
					gotoxy(21,10); p("Your current balance is : %.2fphp\n",balance);
					break;
					case 2 :
					textcolor(YELLOW);
					gotoxy(11,5);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,6);   cprintf("≥                                                          ≥");
					gotoxy(11,7);   cprintf("√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥");
					gotoxy(11,8);   cprintf("≥                                                          ≥");
					gotoxy(11,9);   cprintf("≥                                                          ≥");
					gotoxy(11,10);  cprintf("≥                                                          ≥");
					gotoxy(11,11);  cprintf("≥                                                          ≥");
					gotoxy(11,12);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
					textcolor(MAGENTA);
					gotoxy(37,6);  cprintf("DEPOSIT");
					gotoxy(30,9);   p("Amount : ");
					s("%f",&b);
					if(b > 0 && b<=balance)
					{
						gotoxy(21,11);   p("Your %.2fphp deposited in your account.",b);
						balance +=b;
					}
					else if(b>balance)
					{
						textcolor(RED +BLINK);
						gotoxy(17,11);  cprintf("You can't deposit that much amount in one time.");
					}
					else
					{
						textcolor(RED +BLINK);
						gotoxy(33,11);cprintf("Invalid Amount!");
					}
					break ;
					case 3:
					textcolor(YELLOW);
					gotoxy(11,5);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,6);   cprintf("≥                                                          ≥");
					gotoxy(11,7);   cprintf("√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥");
					gotoxy(11,8);   cprintf("≥                                                          ≥");
					gotoxy(11,9);   cprintf("≥                                                          ≥");
					gotoxy(11,10);  cprintf("≥                                                          ≥");
					gotoxy(11,11);  cprintf("≥                                                          ≥");
					gotoxy(11,12);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
					textcolor(MAGENTA);
					gotoxy(37,6);cprintf("WITHDRAW ");
					gotoxy(30,9);p("Amount : ");
					s("%f",&a);
					if(a>0 && a<=balance)
					{
						gotoxy(21,11);p("You withdrawn %.2fphp in your account.",a);
						balance-=a;
					}
					else if(a>balance)
					{
						textcolor(RED + BLINK);
						gotoxy(33,11);cprintf("Insufficient Fund!");
					}
					else
					{
						textcolor(RED + BLINK);
						gotoxy(34,11);cprintf("INVALID AMOUNT!");
					}
					break;
					case 4:
					textcolor(YELLOW);
					gotoxy(11,5);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,6);   cprintf("≥                                                          ≥");
					gotoxy(11,7);   cprintf("√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥");
					gotoxy(11,8);   cprintf("≥                                                          ≥");
					gotoxy(11,9);   cprintf("≥                                                          ≥");
					gotoxy(11,10);  cprintf("≥                                                          ≥");
					gotoxy(11,11);  cprintf("≥                                                          ≥");
					gotoxy(11,12);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
					textcolor(MAGENTA);
					gotoxy(35,6);cprintf("TRANSFER MONEY");
					gotoxy(27,8);p("Account No. : ");
					s("%d",&account);
					gotoxy(27,9);p("Amount      : ");
					s("%f",&c);
					if(balance>=c && 0<c)
					{
						gotoxy(22,11);p("Your %.2fphp successfully transfered",c);
						balance-=c;
					}
					else if(c<=0)
					{
						textcolor(RED + BLINK);
						gotoxy(29,11);cprintf("Invalid Please Try Again!");
					}
					else
					{
						textcolor(RED + BLINK);
						gotoxy(29,11);cprintf("Insufficient Balance!");
					}
					break;
					default :
					textcolor(RED + BLINK);
					gotoxy(11,9);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,10);  cprintf("≥                                                          ≥");
					gotoxy(11,11);  cprintf("≥                                                          ≥");
					gotoxy(11,12);  cprintf("≥                                                          ≥");
					gotoxy(11,13);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
					gotoxy(30,11);  cprintf("Invalid Transaction!");
				}
				transaction=0;
				while(transaction!=1 && transaction!=2)
				{
					textcolor(CYAN);
					gotoxy(11,15);  cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,16);  cprintf("≥                                                          ≥");
					gotoxy(11,17);  cprintf("≥                                                          ≥");
					gotoxy(11,18);  cprintf("≥                                                          ≥");
					gotoxy(11,19);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
					gotoxy(11,21);  cprintf("⁄ƒƒƒƒƒƒƒƒƒƒø             ⁄ƒƒƒƒƒƒƒƒƒƒø           ⁄ƒƒƒƒƒƒƒƒƒƒø");
					gotoxy(11,22);  cprintf("≥          ≥             ≥          ≥           ≥          ≥");
					gotoxy(11,23);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒŸ             ¿ƒƒƒƒƒƒƒƒƒƒŸ           ¿ƒƒƒƒƒƒƒƒƒƒŸ");
					gotoxy(21,17);  p("Do you want to do another transaction?");
					gotoxy(13,22);           p("[1] Yes");
					gotoxy(39,22);		 p("[2] No");
					gotoxy(62,22);           p(" ");
					s("%d",&transaction);
					if(transaction!=1 && transaction!=2)
					{
						clrscr();
						textcolor(YELLOW);
						gotoxy(11,9);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
						gotoxy(11,10);  cprintf("≥                                                          ≥");
						gotoxy(11,11);  cprintf("≥                                                          ≥");
						gotoxy(11,12);  cprintf("≥                                                          ≥");
						gotoxy(11,13);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
						textcolor(RED + BLINK);
						gotoxy(20,11);cprintf("INVALID!,PLEASE CHOOSE BETWEEN [1] & [2].",transaction);
						textcolor(YELLOW);
						gotoxy(38,19); cprintf("⁄ƒƒƒƒƒø");
						gotoxy(38,20); cprintf("≥     ≥");
						gotoxy(38,21); cprintf("¿ƒƒƒƒƒŸ");
						gotoxy(40,20);p(" ");
						s("%d",&transaction);
					}
				}
			}
			clrscr();
			textcolor(WHITE);
			gotoxy(2,3);   cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø");
			gotoxy(2,4);   cprintf("≥                                             ≥");
			gotoxy(2,5);   cprintf("≥                                             ≥");
			gotoxy(2,6);   cprintf("≥                                             ≥");
			gotoxy(2,7);   cprintf("≥                                             ≥");
			gotoxy(2,8);   cprintf("≥                                             ≥");
			gotoxy(2,9);   cprintf("≥                                             ≥");
			gotoxy(2,10);  cprintf("≥                                             ≥");
			gotoxy(2,11);  cprintf("≥                                             ≥");
			gotoxy(2,12);  cprintf("≥                                             ≥");
			gotoxy(2,13);  cprintf("≥                                             ≥");
			gotoxy(2,14);  cprintf("≥                                             ≥");
			gotoxy(2,15);  cprintf("≥                                             ≥");
			gotoxy(2,16);  cprintf("≥                                             ≥");
			gotoxy(2,17);  cprintf("≥                                             ≥");
			gotoxy(2,18);  cprintf("≥                                             ≥");
			gotoxy(2,19);  cprintf("≥                                             ≥");
			gotoxy(2,20);  cprintf("≥                                             ≥");
			gotoxy(2,21);  cprintf("≥                                             ≥");
			gotoxy(2,22);  cprintf("≥                                             ≥");
			gotoxy(2,23);  cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ");
			gotoxy(18,4);  	printf("3J's & M BANK");
			gotoxy(5,9);    printf("Account No. 		: %d ",type);
			if(b>=0 && b<=balance)
			{
				gotoxy(5,11);   printf("Deposited		:%10.2f php",b);
			}
			else if(b>balance)
			{
				gotoxy(5,11);	printf("Deposited		:      0.00 php",b);
			}
			if(c>=0 && c<=balance)
			{
				gotoxy(5,12);  	printf("Transfered		:%10.2f php",c);
			}
			else if (c>balance)
			{
				gotoxy(5,12);  	printf("Transfered		:      0.00 php",c);
			}
			if(a>=0 && a<=balance)
			{
				gotoxy(5,13);	printf("Withdrawn		:%10.2f php",a);
			}
			else if(a>balance)
			{
				gotoxy(5,13);	printf("Withdrawn		:      0.00 php",a);
			}
			else
			{
				gotoxy(5,13);	printf("Withdrawn		:%10.2f php",a);
			}
			gotoxy(5,14);   printf("Remaining Balance	:%10.2f php",balance);
			gotoxy(11,18);  printf("3J's & M BANK at Your Service");
			gotoxy(13,19);  printf("Your money is safe with us");
			gotoxy(15,20);	printf("Thank You & God Bless!");
			textcolor(CYAN);
			gotoxy(55,7);   cprintf(  "≤≤≤±±∞∞ CREATED ∞∞±±≤≤≤");
			gotoxy(53,8);   cprintf("≤≤≤±±∞∞     BY      ∞∞±±≤≤≤");
			gotoxy(53,9);   cprintf("≤≤                       ≤≤");
			gotoxy(53,10);  cprintf("≤≤                       ≤≤");
			gotoxy(53,11);  cprintf("≤≤                       ≤≤");
			gotoxy(53,12);  cprintf("±±                       ±±");
			gotoxy(53,13);  cprintf("±±                       ±±");
			gotoxy(53,14);  cprintf("∞∞                       ∞∞");
			gotoxy(53,15);  cprintf("∞∞                       ∞∞");
			gotoxy(53,16);  cprintf("±±                       ±±");
			gotoxy(53,17);  cprintf("±±                       ±±");
			gotoxy(53,18);  cprintf("≤≤                       ≤≤");
			gotoxy(53,19);  cprintf("≤≤                       ≤≤");
			gotoxy(53,20);  cprintf("≤≤                       ≤≤");
			gotoxy(53,21);  cprintf("≤≤≤≤≤≤≤≤±±∞∞∞∞∞∞∞±±≤≤≤≤≤≤≤≤");
			gotoxy(56,12);cprintf("JAZH TENE D. ORALE");
			gotoxy(56,11);cprintf("JOSHUA PAUL T. BURGOS");
			gotoxy(56,13);cprintf("JHAKE BRYLLE DALIS");
			gotoxy(56,14);cprintf("MARK CYRIL SUMOROY");
			gotoxy(57,17);cprintf("BACHELOR OF SCIENCE");
			gotoxy(56,18);cprintf("          IN        ");
			gotoxy(55,19);cprintf("INFORMATION TECHNOLOGY");
			gotoxy(55,20);cprintf("          1C        ");
			textcolor(YELLOW);
			gotoxy(53,3);   cprintf("…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕª");
			gotoxy(53,4);   cprintf("∫                        ∫");
			gotoxy(53,5);   cprintf("»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº");
			textcolor(YELLOW+BLINK);
			gotoxy(64,4);   cprintf("IT112");
			gotoxy(79,24);p("  ");
		}
		else
		{
			textcolor(RED +BLINK);
			gotoxy(35,18);cprintf("  INVALID PIN!");
			goto pin;
		}
	}
	else
	{
		textcolor(RED +BLINK);
		gotoxy(35,19);cprintf("INVALID ACCOUNT!");
		goto pin;
	}


	getch();
	return 0;
}