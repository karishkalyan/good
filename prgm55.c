#include<stdio.h>
void main()
{
int n1,n2,p;
printf("\n enter the two numbers:");
scanf("%d%d",&n1,&n2);
p=n1*n2;
if(p%2==0)
printf("\n the product %d is an even numbere",p);
else
printf("\n the product is odd");
getch();
}
