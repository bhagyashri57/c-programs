#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],b[5],c[5]={0,0,0,0,0},i,j,flag=0;
 clrscr();
 printf("Enter the array elemnts for A:\n");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);

 printf("Enter the array elemnts for B:\n");
 for(i=0;i<5;i++)
 scanf("%d",&b[i]);

 for(i=0;i<5;i++)
 {
   for(j=0;j<5;j++)
   {
    if(a[i]==b[j])
    {
     c[i]=a[i];
     flag=1;
    }
   }
 }
 if(flag==1)
 { printf("The Common elements Are:\n");
   for(i=0;i<5;i++)
   printf("%d\n",c[i]);
 }
 else
 printf("No common elemnts are found");
getch();
}