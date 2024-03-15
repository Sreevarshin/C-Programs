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
float f,c,celcius,fah;
printf("\nenter temperature in fahrenheit");
scanf("%f",&f);
celcius=(5.0/9.0)*(f-32);
printf("\ntemp in celcius is %f",celcius);
printf("\nenter temp in celcius");
scanf("%f",&c);
fah=(c*5.0/9.0)+32;
printf("\n temp in fahrenheit is %f",fah);
getch();
}