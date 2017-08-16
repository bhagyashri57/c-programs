#include<stdio.h>
#include<conio.h>
struct student
{
 int roll;
 char name[20];
 int salary;
};
void main()
{
struct student s[5];
float sum=0.0;
int i;
clrscr();
printf("\n enter the roll no:");
for(i=0;i<5;i++)
scanf("%d",&s[i].roll);
printf("\n enter the name:");
for(i=0;i<5;i++)
scanf("%s",&s[i].name);

printf("\n enter the salary:");
for(i=0;i<5;i++)
scanf("%f",&s[i].salary);

for(i=0;i<5;i++)
{
sum=sum+s[i].salary;
}
printf("The summation of salary is:%f",sum);
getch();
}