#include<stdio.h>
#include<conio.h>
void main()
{
  int f,n;
clrscr();
printf("\n enter the value:");
scanf("%d",&n);
f=prime(n);
if(f==0)

printf("\nThe given number is prime:");
else
printf("\n The given number is not prime:");
getch();

}
int prime(int n)
{
  return (n%2);
}