#include<stdio.h>
#include<conio.h>
void main()
{
int i,s=0,n,sign=1;
clrscr();
printf("enter the number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 s=s+(i*sign);
 sign=sign*(-1);

}
printf("%d",s);
getch();
}