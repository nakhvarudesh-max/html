#include<stdio.h>
#include<conio.h>

int large(int,int);
void main()
{
int big,a,b;
clrscr();
printf("enter the 2 numbers");
scanf("%d%d",&a,&b);
big=large(a,b);
printf("the bigger no is %d",big);
getch();}

int large(int a, int b)
{
int large;
if(a>b)
return a;
else
return b;
}
