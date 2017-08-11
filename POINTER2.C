#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int *p,**q;
p=&a;
q=&p ;
clrscr();
printf("\n a->%d",a);
printf("\n p-> %u",p);
printf("\n q->%u",q);
printf("\n &a->%u",&a);
printf("\n &p-> %u",&p);
printf("\n &q->%u",&q);
printf("\n *p->%d",*p);

printf("\n **q->%d",**q);
printf("\n%d",sizeof(a));
printf("\n%d",sizeof(*p));
printf("\n%d",sizeof(**q));
getch();
}