#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("\n enter the number=");
scanf("%lf",&n);
for(i=1;i<=n;i++)
{
s=s+(1/i);
if(i==1)
printf("\n \t 1+");
else if(i==n)
printf("\t(1/%d)",i);
else

 printf("\t(1/%d)+",i);

 }
 printf("\n s=%2f",s);
 getch();


}