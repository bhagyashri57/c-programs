#include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[3][3],i,j,max=0,min;
 clrscr();
 printf("\n Enter the array elements");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);
min=a[0][0];
 printf("\nThe array elements Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
 printf("\n");
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(max <a[i][j])
    max=a[i][j];
    else
    if(min>a[i][j])
     min=a[i][j];
  }
 }
 printf("\nThe Maximun number is :%d",max);
 printf("\nThe Minimun number is :%d",min);
 getch();
 }