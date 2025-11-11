#include<stdio.h>
#include<conio.h>
void main()
{
int i,m;
clrscr();
printf("enter the number from where to start");
scanf("%d",&i);
printf("enter the number where to end");
scanf("%d",&m);
while(i<=m)
{if(i<m){
printf("\n%d",i);
}
i++;
}
getch();
}
