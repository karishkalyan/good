#include<stdio.h>
#include<string.h>
void main()
{
char ch[100];
int i,l,flag=0;
printf("\n enter the string:");
scanf("%c",ch);
l=strlen(ch);
for(i=0;i<l;i++)
{
if((0<=ch[i]<=9)&&{'a'<=ch[i]<='z'))
{
flag=1;
}
}
if(flag==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
getch();
}
