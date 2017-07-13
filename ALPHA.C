#include<stdio.h>
void main()
{
   int i;
   clrscr();
   for(i=65;i<=122;i++)
   {
    if(i>90 && i<97)
    continue;
   printf("%c %d\t",i,i);
   }

   getch();



}