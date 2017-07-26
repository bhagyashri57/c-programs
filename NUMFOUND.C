#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,flag=0,c=0;
 clrscr();
 printf("Enter the Elements:");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the elemnts to be found:");
 scanf("%d",&n);

 for(i=0;i<5;i++)
 {
   if(n==a[i])
   {
	flag=1;
	c++;
   }
 }

   if(flag==1)
     printf("The number is found and count:%d",c);
  else
      printf("The number is not found");
 getch();
}