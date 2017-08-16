#include<stdio.h>
#include<conio.h>
int sum=0,f;
void main()
{
 int n;
int Armstrong(int);
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
f=n;
sum=Armstrong(n);
if(f==sum)
printf("\nThe given number is Armstrong");
else printf("\n the given number is not Armstrong:");
getch();

}
int Armstrong(int n)
{
int r,sum=0;
 while(n)
 {
 r=n%10;
 sum=(r*r*r)+sum;
 n=n/10;

 }
  return sum;
}