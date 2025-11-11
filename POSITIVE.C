#include<stdio.h>
#include<conio.h>
int a(int );
void main()
{
int b,ans;
clrscr();
printf("enter the number");
scanf("%d",&b);
ans=a(b);
if(ans==1)
printf("number is negative");
else if(ans==0)
printf("the number is poisitive");
else
printf("the number is 0");
getch();
}

int a(int b)
{
if(b<0)
return 1;
else if(b>0)
return 0;
else
return 2;
}