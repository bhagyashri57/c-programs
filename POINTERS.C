#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],*p,*p1,i,j;
p=&a[0];
printf("\n enter the elements:");
for(i=0;i<5;i++)
{
scanf("%d",p);
p++;
}
p=a;
p1=&a[1];
for(i=0;i<5;i++)
{
  for(j=i;j<5;j++)
  {
   if(*p>*p1)
   {
   *p=*p1;
   p++;
   p1++;
   }
 }
}
 p=a;
printf("\n After sorting:");
for(i=0;i<5;i++)
{
printf("%d",*p);
p++;
}
getch();
}
