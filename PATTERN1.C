#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s=0,s1=0,n;
printf("\n enter the number ");
scanf("%d",& n);

for(i=1;i<=n;i=i+2)
{
s=s+i;
}
printf("\n %d",s);
for(i=2;i<=n;i=i+2)
{
s1=s1+i;

}

printf("\n %d",s1);
s=s-s1;
printf("\n%d",s);
getch();
}