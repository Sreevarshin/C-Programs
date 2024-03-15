#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p,t,r,si,ci;
printf("enter principal amount:");
scanf("%f",&p);
printf("\n ente time in year:");
scanf("%f",&t);
printf("\n enter rate in percent:");
scanf("%f",&r);
si=(p*t*r)/100.0;
ci=p*(pow(1+r/100,t)-1);
printf("\nsimple interest=%0.3f",si);
printf("\ncompound interest=%0.3f",ci);
getch();
}