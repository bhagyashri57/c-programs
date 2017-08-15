#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2],b[2][2],c[2][2],*p1,*p2,*p3,i,j;
  p1=a;
  printf("\n Enter the array elements for A:");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
     scanf("%d",p1);
     p1++;
    }
  }

  p1=b;
  printf("\n Enter the array elements for B:");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
     scanf("%d",p1);
     p1++;
    }
  }
    p1=a;
    p2=b;
    p3=c;
   printf("The addtion of array elements are:\n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
     *p3=(*p1)+(*p2);
     p1++;
     p2++;
     p3++;
    }
   }
  p3=c;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
    printf("%d \t",*p3);
    p3++;
    }
    printf("\n");
  }
  getch();

}