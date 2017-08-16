#include<stdio.h>
#include<conio.h>
void main()
{
  char str[30];
  int i=0,j=0,l,f=0;
  printf("Enter the String:");
  gets(str);
  l=strlen(str);
  for(i=0,j=l-1;i<(l/2);i++,j--)
  {
  if(str[i]==str[j])
     continue;
  else
  {
    f=1;
   break;
  }
}
  if(f==0)
  printf("\n The string is palindrome");
else
  printf("\n The string is not palindrome");
  getch();



}