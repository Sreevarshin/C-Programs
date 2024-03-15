#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k,num=1;
clrscr();
printf("enter number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=1;k<=n-i;k++)
{
printf(" ",k);
}
for(j=1;j<=i;j++)
{
printf("%d ",num);
num++;
}
printf("\n");
}
for(i=2;i>=n;i--)
{
for(k=1;k<=n-i;k++)
{
printf(" ",k);
}
for(j=1;j<=i;j++)
{
printf("* ",i);
}
printf("\n");
}
getch();
}