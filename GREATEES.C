#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,great;
  printf("Enter the value of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  great=a>b?(a>c?a:c):(b>c?b:c) ;
  printf("%d is greter",great);
  getch();

}