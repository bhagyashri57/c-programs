#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][2],b[2][2],c[2][2],i,j;
 printf("\n enter the elements for A:");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
  scanf("%d\t",&a[i][j]);
  }
  printf("\n");
 }
 printf("\n enter the elements for B:");
  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
  scanf("%d\t",&b[i][j]);
  }
  printf("\n");
 }
 printf("\n The Addition of two matrix are:");

  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
  c[i][j]=a[i][j]+b[i][j];
  }
 }
  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
  printf("%d\t",c[i][j]);
  }
  printf("\n");
 }
getch();
}