#include<stdio.h>
void main()
{
int a,b,temp;
printf("\n enter the numbers:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n after swapping a=%d b=%d",a,b);
getch();
}
