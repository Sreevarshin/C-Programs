#include<stdio.h>
#include<conio.h>
void main()
{
float r,h,a,r1,cylinder,cube,sphere;
clrscr();
printf("enter radius and height of a cylinder\n");
scanf("%f%f",&r,&h);
printf("\n enter side of a cube");
scanf("%f",&a);
printf("\nenter radius of a sphere");
scanf("%f",&r1);
cylinder=3.14*r*r*h;
cube=a*a*a;
sphere=(4.0/3.0)*(3.14*r1*r1*r1);
printf("\n volume of cylinder is %f",cylinder);
printf("\n volume of cube is %f",cube);
printf("\n volume of sphere is %f",sphere);
getch();
}