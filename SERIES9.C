#include<stdio.h>
#include<conio.h>
//#include<math.h>
void main()
{
int i,n,sign=1,j;
float f,s=0;
clrscr();
printf("enter the value of n=");
scanf("%d",&n);
for(i=1,j=2;i<=n;j++)
{
 f=((float)i/(float)j);
printf("%f",f);
  s=s+(f*sign);
  i=j;
  sign=sign*(-1);
}
printf("the sum of this series is=%f",s);

getch();

}