#include<stdio.h>
#include<conio.h>

int sintrest(int,int,int);
void main()
{
int intrest;
int p,r,t;
clrscr();
printf("enter the princliple,rate and time");
scanf("%d%d%d",&p,&r,&t);
intrest=sintrest(p,r,t);
printf("the simple intrest=%d",intrest);
getch();}

int sintrest(int p, int r, int t)
{
int intrest;
intrest=p*r*t/100;
return intrest;
}
