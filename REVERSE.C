
#include<stdio.h>
void main()
{
 int n,a[10],i;
 printf("enter the array size");
 scanf("%d",&n);
 printf("enter the numbers");
 for(i=0;i<=n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=n;i>=0;i--)
 {
 printf("%d",a[i]);
 }
}