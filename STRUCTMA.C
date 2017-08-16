#include<stdio.h>
#include<conio.h>
struct Employee
{
 int emp_Id;
 char name[20];
 int salary;

}E[5];
void main()
{
int i,max=0,min=0;
clrscr();
printf("\n Enter the empId");
for(i=0;i<5;i++)
scanf("%d",&E[i].emp_Id);

printf("\n Enter the empname");
for(i=0;i<5;i++)
scanf("%s",&E[i].name);

printf("\n Enter the salary");
for(i=0;i<5;i++)
scanf("%d",&E[i].salary);
max=E[0].salary;
min=E[0].salary;
for(i=0;i<5;i++)
{
  if(max<E[i].salary)
  {
    max=E[i].salary;
  }
   if(min>E[i].salary)
  {
    min=E[i].salary;
  }
}
printf("\nThe maximun salary is: %d",max);
for(i=0;i<5;i++)
{  if(max==E[i].salary)
{
printf("Emp_Id=%d,Emp_Name=%s,Salary=%d",E[i].emp_Id,E[i].name,E[i].salary);
 }
}

printf("\nThe minimum salary is: %d",min);
getch();
}