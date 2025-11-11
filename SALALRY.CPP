#include<stdio.h>
#include<conio.h>
void main()
{
int bs,da,hra,pf,gs;
clrscr();
printf("enterthe basic salary");
scanf("%d",&bs);
if(bs>5000){
pf=bs*12/100;
hra=bs*15/100;
da=bs*30/100;
{printf("gross salary of employee=%d",bs+pf+hra+da);}
}
else
{
pf=bs*12/100;
hra=bs*15/100;
da=bs*45/100;
{printf("the gross salary of employee=%d",bs+pf+hra+da);}
}
getch();}

