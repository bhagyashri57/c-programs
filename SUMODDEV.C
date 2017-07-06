#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,s=0;
clrscr();

printf("\n enter the number");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
if(i%2!=0)
{
s=s+i;
}
else
{
s=s-i;
}
printf("sum is %d",s);
getch();


}
}


