#include<stdio.h>
#include<conio.h>
void main()
{
int unit;
float amt;
clrscr();
printf("\n enter total units of electricity");
scanf("%d",&unit);
if(unit<=50)
{
amt=unit*0.50;
}
else if((unit<=150)&&(unit>50))
{
amt=25+((unit-50)*0.75);
}
else if((unit<=250)&&(unit>150))
{
amt=100+((unit-150)*1.20);
}
else
{
amt=220+((unit-250)*1.50);
}
printf("\n total electricity bill is %f",amt);
getch();
}

