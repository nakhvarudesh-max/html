#include<stdio.h>
#include<conio.h>
int a(int );
void main()
{
int b,ans;
printf("enter the number");
scanf("%d",&b);
ans=a(b);
if(ans==1)
printf("number is even");
else
printf("the number is odd");
getch();
}

int a(int b)
{
if(b%2==0)
return 1;
else
return 0;
}