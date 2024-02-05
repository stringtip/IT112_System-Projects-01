#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{

int class1;
int b;
int a;
int input;
char ch;
clrscr();

textcolor( MAGENTA + BLINK);
cprintf("Welcome to USTP Bus station\n\n");
printf("\n press 1 for Bus 1 seat reservation!");
printf("\n press 2 for Bus 2 seat reservation!");
scanf("%d",&class1);

switch(class1)
{
case 1:
{
printf("\n Enter your seat number in Bus 1:");
scanf("%d",&a);
if(a<100)
{
printf("\n\t\t\t\t\t\tyour Bus details\n");
printf("Your Bus: Bus 1",class1);
printf("\n your seat number:  %d \n\n",a);
}
else
{
printf("\n you have booked your bus reservation in Bus 2");
printf("\n your seat number: %d\n\n",a);
}
break;
}
case 2:
{
printf("\n Enter your seat number in Bus 2");
scanf("%d",&b);
if(b>=101||b<200)
{
printf(" \n\t\t\t\t\t\t__________your Bus detail__________\n");
printf("your Bus: Bus 2",class1);
printf("\n your seat number: %d",b);
}
else
{
printf("\n sorry seats are full do you want to reserve in Bus 1? (Y or N)?:-");
scanf("%c",&ch);
if(ch=='g'||ch=='g')
{
printf("\n you have successfully booked on Bus 2");
printf("\n your seat number:  %d",a);
}
break;
default:
printf("\n sorry there is an error! please choose the given option \n\n\t\t Thank you");
break;
}
}

}
return 0;
}