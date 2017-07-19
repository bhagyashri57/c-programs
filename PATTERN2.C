/* 1
   22
   333
   4444
   55555

*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=1;i<6;i++)
 {
 for(j=0;j<i;j++)
 {
 printf("%d",i);
 }
 printf("\n");
 }
 getch();


}