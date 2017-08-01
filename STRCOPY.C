#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char src[12],des[12];
  int i;
  clrscr();
  printf("\n enter the src string");
  gets(src);
  while(src[i]!='\0')
  {
  des[i]=src[i];
  i++;
  }
  des[i]='\0';
  printf("\n the destine string is: %s ",des);
  getch();

}