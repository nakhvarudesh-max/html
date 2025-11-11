#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,sum;
printf("enter 2 numbers");
scanf("%d %d",&a,&b);
sum=add(a,b);
printf("the sum of 2 number=%d",sum);
getch();
 }
int add(int a,int b)
{
int add;
add=a+b;
return add;
}

