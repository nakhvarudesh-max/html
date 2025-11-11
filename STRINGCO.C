#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int ans;
char s1[20],s2[20];
clrscr();
printf("entre the element of the string");
gets(s1);
printf("enter the element for second string");
gets(s2);
ans=strcmp(s1,s2);
if(ans==0)
printf("both are same");
else if(ans<0)
printf("s1 id samaller");
else
printf("s2 is sama");
getch()
;}