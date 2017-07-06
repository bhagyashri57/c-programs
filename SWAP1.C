#include<stdio.h>
#include<conio.h>
void main()
{
 int x=10,y=5;
 x=x+y;
 y=x-y;
 x=x-y;
 printf("after swapping...");
 printf("%d%d",x,y);
 getch();

}