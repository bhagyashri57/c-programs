#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,s=0,sign=1;
clrscr();
printf("\n enter the number ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
s=s+(i*sign);
sign=sign*-1;

}
printf("sum is %d",s);
getch();

}