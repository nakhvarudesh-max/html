#include<stdio.h>
#include<conio.h>
int reverse(int);
void main()
{
int n,r;
printf("enter the number");
scanf("%d",&n);
r=reverse(n);
printf("the reverse of the number =%d",r);
getch();
}

int reverse(int n)
{
int rev=0,d ;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
return rev;
}