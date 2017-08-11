#include<stdio.h>
void main()
{
char str1[20],str[20];
int i,j,k=0;
printf("\n enter the string: ");
gets(str);

for(i=65;i<=97;i++)

{
  for(j=0;str[j]!='\0';j++)
  {
  if(str[j]==i)
  {
  str1[k]=str[j];
  k++;
  }
 }

}
str1[k]='\0';
printf("%s",str1);
getch();

}