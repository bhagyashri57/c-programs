#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,j=2,i,s=0,fact,t;
 clrscr();
 printf("Enter the value of n");
 scanf("%d",&n);
 for(i=2;i<=n;i=i+2)
 {  fact=1;
 for(j=5;j<=i;j++)
 {
 fact=fact*j;
  t=pow(fact,(j-4));
 s=s+pow(t,j);
 }
  printf("(%d!^%d)^%d+",i,(i-4),j);
   j=j+2;
 }
 printf("\n The sum of series is=%d",s);
 getch();


}