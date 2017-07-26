#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],b[5],c[10],i;
 clrscr();
 printf("\n Enter the elements for A:");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n Enter the elements for B:");
 for(i=0;i<5;i++)
 {
 scanf("%d",&b[i]);
 }
 printf("\n The Merging of two array elements are:");
 for(i=0;i<5;i++)
 {
 c[i]=a[i];
 }
  for(i=0;i<=5;i++)
 {
 c[5+i]=b[i];
 }
 for(i=0;i<10;i++)
 {
 printf("%d",c[i]);
 }
  getch();
}