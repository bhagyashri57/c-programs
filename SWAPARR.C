#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,temp,n;
 clrscr();
 printf("Enter the size of Array:");
 scanf("%d",&n);
 a[n] ;

 printf("Enter the Array Elements:");


 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }

 printf("Array Elements Before swapping:");

 for(i=0;i<n;i++)
 {
 printf("%d",a[i]);
 }
 for(i=0;i<n/2;i++)
 {
   temp=a[i];
   a[i]=a[4-i];
   a[4-i]=temp;
 }
 printf("The elemnts After swapping:");
 for(i=0;i<n;i++)
 {
 printf("%d",a[i]);
 }
 getch();
}