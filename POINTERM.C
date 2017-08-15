
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],*p,i,max=0,min;
p=&a[0];
clrscr();
printf("\n enter the elements:");
for(i=0;i<5;i++)
{
scanf("%d",p);
p++;
}
p=&a[0];

for(i=0;i<5;i++)
{
    if(max<*p)
     {
     max=*p;
     p++;
   }
}
printf("max value=%d",max);

min=a[1];
*p=a;
for(i=0;i<5;i++)
{
    if(min>*p)
     {
     min=*p;
     p++;
   }
}
printf("min value=%d",min);
printf("\n %d",*p);


getch();
}

