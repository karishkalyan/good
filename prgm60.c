#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("\n enter the limit:");
scanf("%d",&n);
printf("\n a=%d\tb=%d",a,b);
for(i=0;i<n-2;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
getch();
}


