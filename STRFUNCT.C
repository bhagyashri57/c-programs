#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char Fn[12],Ln[12],Full[20];
 clrscr();
 printf("Enter the First name");
 scanf("%s",&Fn);
 printf("Enter the Last name");
 scanf("%s",&Ln);
 printf("==================\n");

printf("\n%s", strcat(Fn,Ln));
printf("\n%s",strrev(Fn));
printf("\n%s",strcpy(Fn,Ln));
printf("\n%d",strlen(Fn));
 getch();

}