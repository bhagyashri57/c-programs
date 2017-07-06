#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1,s=0;
printf("\n enter the value of n=");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
fact=(fact*i);
 s=s+((fact)/i);
 printf(" (%d!/%d)+\t ",i,i);
}
 printf("\n sum of n= %d",s);
 getch();
}

