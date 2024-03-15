#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
printf("\n calculate the sum of 2 nos.");
sum();
}
void sum()
{
int a,b;
printf("\n enter 2 nos.");
scanf("%d%d",&a,&b);
printf("the sum is %d",a+b);
getch();
}