#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,r,m;
clrscr();
printf("enter the size of the array");
scanf("%d",&r);

printf("enter the element for the array");
for(i=0;i<r;i++)
scanf("%d",&a[ i]);

printf("the elementes in the array=");
for(i=0;i<r;i++)
printf("\n%d",a[i]);

m=a[0];
for(i=1;i<r;i++)
{
if(a[i]>m)
m=a[i];
}
printf("\nxthe maximum number=%d",m);

getch();}
