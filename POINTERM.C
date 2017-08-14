#include<stdio.h>
#include<conio.h>
void main()
{
int *p,a[5],b[5],c[10],i;
p=a;
clrscr();
printf("\n enter the elements for array A::");
for(i=0;i<=4;i++)
{
scanf("%d",p);
p++;
}
p=b;
printf("\n enter the elements for array B::");
for(i=0;i<=4;i++)
{
scanf("%d",p);
p++;
}
printf("\n The Merging of two array elements are:");
p=c;
for(i=0;i<=4;i++)
{
*p=a[i];
p++;
}
for(i=0;i<=4;i++)
{
*p=b[i];
p++;
}
p=&c[0];
 for(i=0;i<=9;i++)
{
printf("%d",*p);
p++;
}

getch();
}