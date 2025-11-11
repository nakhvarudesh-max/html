#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],i;
clrscr();
printf("enter the elements of the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
printf("the elements are=");
for(i=0;i<5;i++)
printf("\n%d",b[i]);
getch();}