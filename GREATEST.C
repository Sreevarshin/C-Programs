#include<stdio.h>
#include<conio.h>
void big();
void main()
{
clrscr();
printf("the greatest number is\n");
big();
}
void big()
{
int a,b,c;
printf("enter 3 nos\n");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("%d is greatest",a);
}
if(b>c)
{
printf("%d is greatest",b);
}
else
{
printf("%d is greatest",c);
}
getch();
}