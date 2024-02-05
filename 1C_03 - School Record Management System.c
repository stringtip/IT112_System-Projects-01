#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
int main()
{
int transaction = 1;
clrscr();
while(transaction==1)
{
int input;
     clrscr();
     gotoxy(20,2);
     pf ("School Records Management System");
     gotoxy(5,4);
     pf("[1] Christene Joy Elpides");
     gotoxy(5,6);
     pf("[2] Gellyn S. Rabino");
     gotoxy(5,8);
     pf("[3] Maxel Mae B. Lapera");
     gotoxy(5,10);
     pf("[4] Riza S. Tual");
     gotoxy(5,12);
     pf("[5] Tj D. Calo");
     gotoxy(5,14);
     pf("[6] Rachelle Mae D. Aurea");
     gotoxy(5,22);
     pf("input: ");
     sf("%d", &input);
     clrscr();
     switch(input){
     case 1:
     //clrscr();
     gotoxy(27,2);
     pf("[Christene Joy Elpides]");
     gotoxy(5,6);
     pf("Gender: Female");
     gotoxy(5,8);
     pf("Address: P-5, Lower Loboc, Oroquieta City");
     gotoxy(5,10);
     pf("Birthdate: November 24, 2004");
     gotoxy(5,12);
     pf("Contact Number: 09817360083");
     break;
     case 2:
     //clrscr();
     gotoxy(32,2);
     pf("[Gellyn S. Rabino]");
     gotoxy(5,6);
     pf("Gender: Female");
     gotoxy(5,8);
     pf("Address: P-2, Upper Lamac, Oroquieta City");
     gotoxy(5,10);
     pf("Birthdate: May 24, 2005");
     gotoxy(5,12);
     pf("Contact Number: 09639231903");
     break;
     case 3:
     //clrscr();
     gotoxy(30,2);
     pf("[Maxel Mae B. Lapera]");
     gotoxy(5,6);
     pf("Gender: Female");
     gotoxy(5,8);
     pf("Address: P-4,Taboc Norte, Oroquieta City");
     gotoxy(5,10);
     pf("Birthdate: October 5, 2004");
     gotoxy(5,12);
     pf("Contact Number: 09452213803");
     break;
     case 4:
     //clrscr();
     gotoxy(36,2);
     pf("[Riza S. Tual]");
     gotoxy(5,6);
     pf("Gender: Female");
     gotoxy(5,8);
     pf("Address: P-7, Palayan Aloran, Orouieta City");
     gotoxy(5,10);
     pf("Birthdate: June 2, 2005");
     gotoxy(5,12);
     pf("Contact Number: 09665749046");
     break;
     case 5:
     //clrscr();
     gotoxy(37,2);
     pf("[Tj D. Calo]");
     gotoxy(5,6);
     pf("Gender: Male");
     gotoxy(5,8);
     pf("Address: P-5, Molatuhan Bajo, Lopez Jaena");
     gotoxy(5,10);
     pf("Birthdate: December 14, 2005");
     gotoxy(5,12);
     pf("Contact Number: 09816204038");
     break;
     case 6:
     //clrscr();
     gotoxy(27,2);
     pf("[Rachelle Mae D. Aurea]");
     gotoxy(5,6);
     pf("Gender: Female");
     gotoxy(5,8);
     pf("Address: P-6, Taboc Sur, Oroqueta City");
     gotoxy(5,10);
     pf("Birthdate: August 23, 2003");
     gotoxy(5,12);
     pf("Conact Number: 09067308327");
     break;
     default:
     printf("INVALID");
     }
     //clrscr();
     transaction = 0;
     while(transaction != 1 && transaction !=2)
     {
     gotoxy(25,21);printf("Do you want to check other students?");
     gotoxy(30,23);printf("[1] YES    [2]NO");
     gotoxy(30,24);printf(" ");
     scanf("%d",&transaction);
     if(transaction !=1 && transaction !=2)
     {
     clrscr();
     printf("Please choose between [1] & [2]");
     scanf("%d",&transaction);
     }
     }
     }
getch();
return 0;
}
