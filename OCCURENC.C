#include<stdio.h>
#include<conio.h>
void main()
{
char ch[20],i,c=0,a;
printf("\n Enter the string : ");
gets(ch);
printf("\n Enter the character:");
scanf("%c",&a);
for(i=0;ch[i]!='\0';i++)
{
 if(ch[i]==a)
 {
 c++;
 }

}
printf("The %c chracter occure %d times:",a,c);
getch();


}