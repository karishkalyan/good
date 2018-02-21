#include<stdio.h>
void main()
{
int a[20],max,i,n;
printf("\n enter the numbers:");
scanf("%d",&n);
printf("\n the elements are:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("\n largest number is %d",max);
getch();
}
