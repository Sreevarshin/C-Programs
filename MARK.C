#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g;
clrscr();
printf("\n enter english mark:");
scanf("%d",&a);
printf("\n enter tamil mark:");
scanf("%d",&b);
printf("\n enter social marks:");
scanf("%d",&c);
printf("\n enter maths marks:");
scanf("%d",&d);
printf("\n enter science marks:");
scanf("%d",&e);
f=a+b+c+d+e;
printf("\n total:%d",f);
g=a+b+c+d+e/5;
printf("\n average:%d",g);
getch();
}
