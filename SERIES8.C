#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,s=0,f=1;
printf("enter the value of n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{   f=f*i;
  s=s+(pow(i,i)/f);
  printf("[(%d^%d)/%d!]+\t",i,i,i);
}
printf("the sum of this series is=%d",s);

getch();

}