#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,count=0;
clrscr();
printf("\nenter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
count++;
}
}
if(count==2)
{
printf("\nprime number");
}
else
{
printf("\ncomposite number");
}
getch();
}