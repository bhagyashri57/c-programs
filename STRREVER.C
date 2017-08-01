#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  char ch[12];
  clrscr();
  printf("\nEnter the string :");
  gets(ch);
 while(ch[i]!='\0')
  {
  i++;
  }
  i--;
  while(i>=0)
  {
  printf("%c",ch[i]);
  i--;
  }
getch();

}