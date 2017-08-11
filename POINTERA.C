#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20;
int *p,*p1;
p1=&a;
p1=&b ;
clrscr();
printf("%d",*p+*p1);
printf("\n %d",*p);
getch();
}