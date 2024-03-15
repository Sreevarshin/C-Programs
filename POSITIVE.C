#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a number\n");
scanf("%d",&a);
if(a>0)
{
printf("%d is positive",a);
}
else if(a<0)
{
printf("%d is negative",a);
}
else
{
printf("%d is zero",a);
}
getch();
}