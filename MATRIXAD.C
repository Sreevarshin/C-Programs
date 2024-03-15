#include<stdio.h>
#define SIZE 3
#include<conio.h>
void main()
{
int A[SIZE][SIZE];
int B[SIZE][SIZE];
int C[SIZE][SIZE];
int row,col;
clrscr();
printf("enter elements in matrix A of size 3*3;\n");
for(row=0;row<SIZE;row++)
{
for(col=0;col<SIZE;col++)
{
scanf("%d",&A[row][col]);
}
}
printf("enter elements in matrix B of size 3*3;\n");
for(row=0;row<SIZE;row++)
{
for(col=0;col<SIZE;col++)
{
scanf("%d",&B[row][col]);
}
}
for(row=0;row<SIZE;row++)
{
for(col=0;col<SIZE;col++)
{
C[row][col]=A[row][col]+B[row][col];
}
}
for(row=0;row<SIZE;row++)
{
for(col=0;col<SIZE;col++)
{
printf("%d",C[row][col]);
}
}
printf("\n");
getch();
}