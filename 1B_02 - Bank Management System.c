
#include<stdio.h>
#include<conio.h>
int main () {

float draw,dep,transfer;
char name[24];
float balance=10000;
int account,account1,account2;
int type;
int transaction=1;
clrscr();
textcolor(CYAN + BLINK);

printf("\n\t\t\t\tBANKING SYSTEM\n\n");
printf("\t\t\2 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \2\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2\tWELCOME TO OUR FLORES BANKING SYSTEM\t\2\t\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \2\n");
printf("Enter your name: ");
scanf("%s",&name);
printf("\nplease enter your account no.: ");
scanf("%s",type);
while(transaction == 1)
{
int option;
printf("\nchoose what you want to do\n");
printf("1 - Balance Enquiry\n");
printf("2 - Deposit\n");
printf("3 - withdraw\n");
printf("4 - Transfer\n");
scanf("%d",&option);
switch(option)
{
case 1:
textcolor( MAGENTA + BLINK );
printf("\t\t\tBALANCE ENQUIRY\n\n");
printf("your current balance is: %.2fphp.\n",balance);
break;
case 2:
printf("\n\t\t\tDEPOSIT AMOUNT\n\n");
printf("how much money do you want to deposit:");
scanf("%f",&dep);
if(dep > 0 && dep<100000)
{
printf("\nyour x.2fits deposited in your account.\n\n",dep);
balance+=dep;
}
else if (dep>100000)
{
printf("\nyou can't deposit that much amount in one time.\n\n");
}
else
{
printf("\ninvalid deposit account\n");
}
break;
case 3:
printf("\n\t\tWITHDRAW AMOUNT\n\n");
printf("how much money do you want to withdraw:");
scanf("%f",&draw);
if(draw<=balance && draw<=100000)
{
printf("\nyou just withdraw x.2fRs\n\n",draw);
balance=draw;
}
else if(draw>100000)
{
printf("\nyou can't withdraw that much amount in one time.\n\n");
}
else
{
printf("\nyo dont have enough money\n\n");
}
break;
case 4:
printf("\t\t\tTRANSFER AMOUNT\n\n");
printf("\n\t\tAccount You Want To Transfer:");
scanf("%d",&account2);
printf("\nhow much amount?:");
scanf("%F",&transfer);
if(balance>=transfer)
{
printf("\nyour x.2fRs successfully transfered\n\n",transfer);
balance=transfer;
}
else
{
printf("\nyou dont have sufficient balance\n\n");
}
break;
default:
printf("invalid transaction\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
printf("do you want to do another transaction?\n");
printf("1. yes 2. no\n");
scanf("%d",&transaction);
if(transaction!=1 && transaction!=2)
{
printf("Invalid no.\nchoose between 1 and 2 only\n");
}
}
}
clrscr();
printf("\n\t\t\t    ----------------------------");
printf("\n\t\t\t\tFLORES BANK LIMITED\n");
printf("\t\t\t    -----------------------------\n\n");
printf("\t\t\tdate:1/3/2024 time:10:20 AM\n");
printf("\n\t\t\t\4 your name: %s\n\n",name);
printf("\n\t\t\t\4 your account no: %s\n\n",type);
if(dep >= 0 && dep < 100000)
{
printf("\t\t\t\4 you've balance %.2fphp.\n",dep);
}
else
{
printf("\t\t\t\4 you've deposited %.2fphp.\n",dep);
}
{
printf("\t\t\t\4 you've deposited Ophp.\n");
}
if(draw>0 && draw<=100000 && draw<=balance)
{
printf("\t\t\t\4 you've witdraw % 2fphp.\n",draw);
}
else
{
printf("\t\t\t\4 you've witdraw Ophp.\n");
}
if(transfer>0 && transfer<=100000 && transfer<=balance)
{
printf("\t\t\t you've transferred %.2fphp.\n",transfer);
}
else
{
printf("you've transferred Ophp.\n");
}
printf("\n\t\t\t  ==============================\n");
printf("\n\t\t\t  thank you! \n");
printf("\t\t\t  welcome to FLORES BANKING SYSTEM");
printf("\n\t\t\t    Floresbankingsystem.com\n");
printf("\n\t\t\t  ==============================\n");
getch();
return(0);
}


