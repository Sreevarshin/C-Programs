#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],n,i;
clrscr();
printf("enter size of array n");
scanf("%d",&n);
printf("enter elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n all negative elements in array are:");
for(i=0;i<n;i++)
{
if(a[i]<0)
{
printf("%d\t",a[i]);
}
}
getch();
}