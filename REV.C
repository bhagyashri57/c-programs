#include<stdio.h>
#include<conio.h>
void main()
{
  short int num,num1,temp,rev=0;
  printf("\n enter the number");
  scanf("\n %d",&num);
  temp=num;
  while(num!=0)
  {
   rev=(rev*10)+(num%10);
   num=num/10;
  }
  printf("reverse=%d",rev);
  if(temp==rev)
   printf("\n palindrome");
 else
 printf("not palindrome");
  getch();
}