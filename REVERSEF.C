#include<stdio.h>
#include<conio.h>
void rev();
void main()
{
clrscr();
printf("calculate reverse of number\n");
rev();
}
void rev()
{
int a,b,c=0,i;
scanf("%d",&a);
for(i=0;i<a;i++)
{
b=a%10;
c=(c*10)+b;
a=a/10;
}
printf("reverse of number is %d\n",c);
getch();
}

