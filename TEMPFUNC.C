#include<stdio.h>
#include<conio.h>
void temp();
void main()
{
clrscr();
printf("temperature conversion");
temp();
}
void temp()
{
int f,c,cel,fah;
printf("\nenter temperature in fahrenheit");
scanf("%d",&f);
cel=(5.0/9.0)*(f-32);
printf("\ntemp in celcius is %d",cel);
printf("\nenter temp in celcius");
scanf("%d",&c);
fah=32+((9.0/5.0)*c);
printf("\n temp in fahrenheit is %d",fah);
getch();
}