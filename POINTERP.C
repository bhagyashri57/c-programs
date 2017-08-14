#include<stdio.h>
#include<conio.h>
void main()
{
int *p,a[5],i;
p=a;
clrscr();
printf("\n enter the elements:");
for(i=0;i<=4;i++)
{
scanf("%d",p);
p++;
}
printf("\n The elements are:");
p=&a[0];
for(i=0;i<=4;i++)
{
printf("\n %d",*p);
p++;
}

printf("%d",sizeof(p));
getch();
}