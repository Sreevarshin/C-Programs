#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=9,c;
int *p,*q;
p=&a;
q=&b;
c=*p;
clrscr();
printf("\nvalue of a=%d",a);
printf("\nvalue of a=%d",*p);
printf("\naddress of a=%x",&a);
printf("\naddress of a=%x",p);
printf("\naddress of p=%x",&p);
printf("\naddress of c=%x",&c);
printf("\na=%d",a);
printf("\naddress of a=%x",p);
getch();
}
