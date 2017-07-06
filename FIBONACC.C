#include<stdio.h>
#include<conio.h>
void main()
{int i,f1=0,f2=1,f3,n;
printf("\n enter the value:");
scanf("%d",&n);
printf("%d\t%d",f1,f2);
for(i=0;i<n;i++)
{
f3=f1+f2;
f1=f2;
f2=f3;
printf("\t%d",f3);
}
  getch();
}