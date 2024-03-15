#include<stdio.h>
#include<conio.h>
void swapv(int x,int y);
void main()
{
int a=10,b=20;
clrscr();
swapv(a,b);
printf("a=%d b=%d\n",a,b);
getch();
}
void swapv(int x,int y)
{
int t;
t=x;x=y;y=t;
printf("x=%d y=%d\n",x,y);
}