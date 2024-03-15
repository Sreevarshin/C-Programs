#include<stdio.h>
#include<conio.h>
void main()
{
char operation;
float n1,n2;
clrscr();
printf("enter an operator\n");
scanf("%c",&operation);
printf("enter two operand\n");
scanf("%f%f",&n1,&n2);
switch(operation)
{
case '+':
printf("%f+%f=%f",n1,n2,n1+n2);
break;
case '-':
printf("%f-%f=%f",n1,n2,n1-n2);
break;
case '*':
printf("%f*%f=%f",n1,n2,n1*n2);
break;
case '/':
printf("%f/%f=%f",n1,n2,n1/n2);
break;
default:
printf("enter valid operator\n");
}
getch();
}