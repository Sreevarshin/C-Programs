#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int i,n,c=0;
printf("enter the string;");
gets(s);
for(i=0;i<=n/2;i++)
{
if(s[i]==s[n-i-1])
{
c++;
}
if(c==i)
{
printf("string is palindrome");
}
else
{
printf("string is not palindrome");
}
}
getch();
}