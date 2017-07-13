#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   printf("\n Enter number:");
   scanf("%d%d",&a);
   if(a%2==0)
   printf("\n The% d number is even ",a);
 else
     printf("\n The% d number is odd ",a);
  getch();
};