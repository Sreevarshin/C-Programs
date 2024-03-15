#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
float marks;
};
void main()
{
struct student s1={1,"sree",90};
struct student s2={2,"varshini",100};
printf("\ninformation of s1");
printf("\n%d \n%s \n%f",s1.rollno,s1.name,s1.marks);
printf("\ninformation of s2");
printf("\n%d \n%s \n%f",s2.rollno,s2.name,s2.marks);
getch();
}
