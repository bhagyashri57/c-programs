#include<stdio.h>
#include<conio.h>
void main()
{
char str[50][10];
int i;
clrscr();
printf("Enter the values:");
for(i=0;i<10;i++)
gets(str[i]);
printf("\nThe data are:\n ");
for(i=9;i>=0;i--)
{
printf("\n %s",str[i]);
}
getch();


}