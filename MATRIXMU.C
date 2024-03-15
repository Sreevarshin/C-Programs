#include<stdio.h>
#define SIZE 3
#include<conio.h>
void main()
{
int A[SIZE][SIZE],B[SIZE][SIZE],C[SIZE][SIZE],r,c,k;
printf("enter the elements of matrix A\n");
for(r=0;r<SIZE;r++)
{
for(c=0;c<SIZE;c++)
{
scanf("%d",&A[r][c]);
}
}
printf("enter the elements of matrix B\n");
for(r=0;r<SIZE;r++)
{
for(c=0;c<SIZE;c++)
{
scanf("%d",&B[r][c]);
}
}
printf("multiply the matrix");
for(r=0;r<SIZE;r++)
{
for(c=0;c<SIZE;c++)
{
C[r][c]=0;
for(k=0;k<c;k++)
{
C[r][c]+=A[r][c]*B[k][c];
}
}
}
for(r=0;r<SIZE;r++)
{
for(c=0;c<SIZE;c++)
{
printf("%d\t",C[r][c]);
}
printf("\n");
}
getch();
}