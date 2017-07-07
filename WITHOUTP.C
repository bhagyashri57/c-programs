#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,s=0,p,j;
 clrscr();
 printf("enter the value for n=");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 p=1;

 for(j=1;j<=i;j++)
 {
 p=p*i;

 }
 s=s+p;
 }
 printf("the sum of series without using power function=%d",s);
getch();
}