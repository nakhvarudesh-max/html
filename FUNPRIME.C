#include<stdio.h>
#include<conio.h>
int prime(int n)//declartion &defination
{
int i,flag=0;
for(i=2;i>n;i++)
{
  if(n%i==0)
  {
    flag=1;
    break;
   }
}
if(flag==1)
return 1;
else
return 0;
}
void main()
{
int n,ans;
clrscr();
printf("Enter the number to check it is prime or not=");
scanf("%d",&n);
ans=prime(n);//call
if(ans==1)
{
printf("Number is not prime");
}
else
{
printf("Number is prime");
}
getch();
}