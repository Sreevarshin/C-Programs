#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],sum=0;
clrscr();
printf("enter five numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("sum of five numbers=%d",sum);
getch();
}
