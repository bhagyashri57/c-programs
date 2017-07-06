#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1=0,temp,r;
printf("enter the number:") ;
scanf("%d",&n);
temp=n;
while(n!=0)
{
  r=n%10;
  n1=n1+(r*r*r);
  n=n/10;
}
if(n1==temp)
printf("armstrong:") ;
else
printf("not armstrong:") ;
getch();

}