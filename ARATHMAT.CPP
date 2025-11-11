#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char opration;
clrscr();
printf("enter the number a :");
scanf("%d",&a);
printf("enter the number b :");
scanf("%d",&b);
printf("enter the optration +,-,*,/:");
fflush(stdin);d
scanf("%c",&opration);
switch(opration)
{
case '+':
      printf("addition of2  no is=%d",a+b);
      break;
case '-':
      printf("subtraction of 2 number is=%d",a-b);
      break;
case '*':
      printf("product of 2 number is=%d",a*b);
      break;
case '/':
      printf("subtraction of 2 number is=%d",a/b);
      break;
default:
      printf("wrong opration selected");
      }
getch();}