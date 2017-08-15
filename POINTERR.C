#include<stdio.h>
#include<conio.h>
void main()
{
  int num,*p,i,r,temp,rev=0;
  p=&num;
  printf("\n enter the value:");
  scanf("%d",p);
  printf("\n %d",*p);
  temp=*p;
  while(*p!=0)
  {
    r=*p%10;
    rev=(rev*10)+r;
    *p=*p/10;
  }
  if(temp==rev)
	    printf("\nnumber is palindrome");
       else
       printf("The number is not palindrome:");
	    getch();
}