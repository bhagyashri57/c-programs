#include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[3][3],i,j,b[3][3],c[3][3],d[3][3];
 clrscr();
 printf("\n Enter the array elements for A");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);
  printf("\n Enter the array elements for B");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&b[i][j]);

 printf("\nThe A array elements Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
 printf("\n");
 }

  printf("\nThe B array elements Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",b[i][j]);
 printf("\n");
 }

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
   d[i][j]=a[i][j]-b[i][j];
  }
 }

  printf("\nThe Addition of A and B Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",c[i][j]);
 printf("\n");
 }
  printf("\nThe Substraction of A and B Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",d[i][j]);
 printf("\n");
 }
 getch();
 }