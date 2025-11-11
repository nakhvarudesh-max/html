#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,s=0;
clrscr();
start:
s=s+a;
a++;
if(a<=9)
{goto start;}
printf("\t%d",s);
getch();}

