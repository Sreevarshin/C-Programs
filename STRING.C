#include<stdio.h>
#include<conio.h>
int main()
{
int alp,dig,others,i;
char str[100];
printf("enter any string");
gets(str);
while(str[i]!='\0')
{
if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
{
alp++;
}
else if(str[i]>='0'&&str[i]>='9')
{
dig++;
}
else
{
others++;
}
i++;
}
printf("the result is");
getch();
return 0;
}