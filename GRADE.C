#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g,h;
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
h=(f/500)*100;
printf("\n average:%d",g);
getch();
}
if(h>=80)
{
printf("grade= A")
}
else if((h>=60)&&(h<80))
{
printf("\n grade= B");
}
else if((h>=40)&&9h<60));
{
printf("\n grade= C");
else
{
printf("\n fail\n")
}
getch();
}