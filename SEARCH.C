#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],s,i,ele,flag=0;
clrscr();
printf("enter the no of element you want to enter");
scanf("%d",&s);
printf("enter the values of element");
for(i=0;i<s;i++)
scanf("%d",&a[i]);

printf("enter the element u want to search");
scanf("%d",&ele);
for(i=0;i<s;i++)
{
 if(a[i]==ele)
 {
 flag=1;
 break;
 }
}
if(flag==1) {
printf("element found");}
else
printf("element not found");
getch();}


