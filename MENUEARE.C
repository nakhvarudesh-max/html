#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,r,s,op;
char ou;
clrscr();
do{
printf("\n1.get the area of the rectangle");
printf("\n2.get the area of the square");
printf("\n3.get the area of the circle");
scanf("%d",&op);
if(op==1)
{printf("\nenter the length of rectangle");
scanf("%d",&l) ;
printf("\nenter the breath of rectangle");
scanf("%d",&b);
{printf("\nthe area of rectangle=%d",l*b);
}}
else if(op==2)
{printf("\nenter the length of side square");
scanf("%d",&s);
{printf("\narea of square=%d",s*s);}}
else if(op==3)
{printf("\nenter the radius of circle");
scanf("%d",&r);
{printf("\nthe area of the circle=%d",22/7*r*r);}}
else{
printf("\nwrong input");
}
printf("\ndo u want to continue....y/n");
scanf("%c",&ou);
}while(ou=='y');
getch();}


