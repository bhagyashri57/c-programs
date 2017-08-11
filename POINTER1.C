#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int *p;
p=&a;
clrscr();
printf("%d",a);
printf("%d",&a);
printf("%d",p);
printf("%d",&p);
printf("%d",*p);
getch();

}