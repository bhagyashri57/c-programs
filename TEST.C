#include<stdio.h>
#include<conio.h>

void main()
{
int i=2,j=4,k=1;
clrscr();
k=i++ + i * j-- + ++i - ++k;

printf("%d",i++);
printf("%d",++j);
printf("%d",k++ + i++);

getch();

}