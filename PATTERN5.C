 /*
 54321
 4321
 321
 21
 1

*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=5;i>=1;i--)
 {
 for(j=5;j>=1;j=j--)
 {
 printf("%d",(j));
 }
 j--;
 printf("\n");
 }
 getch();


}