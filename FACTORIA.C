#include<stdio.h>
#include<conio.h>
void main()
{
 int fact=1,n,i;
 printf("\n enter the number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 fact=fact*i;
 }
	    printf("\n factorial of %d number is =%d",n,fact);
	    getch();
}