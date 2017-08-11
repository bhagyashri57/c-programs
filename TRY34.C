#include<stdio.h>
#include<conio.h>
int main()
{
static char str1[]="Dills";
static char str2[20];
static char str3[]="Daffo";
int i=0;
clrscr();
i=strcmp(strcat(str3,strcpy(str2,str1)),"DaffoDills");
printf("\n %d",i);
printf("%s",str3);
getch();
return 0;
}