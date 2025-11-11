#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
printf("Enter the number to check it is prime or not=");
scanf("%d",&n);
for(i=2;i>n;i++)
{
  if(n%i==0)
  {
    flag=1;
    break;
   }
}
if(flag==1)
{
printf("Number is not prime");
}
else
{
printf("Number is prime");
}
getch();
}