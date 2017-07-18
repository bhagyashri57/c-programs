/*
#include<stdio.h>
#include<conio.h>
int main()
{
  static int var[5];

  int count=0;
   clrscr();
   var[++count]=++count;
   for(count=0;count<5;count++)
   printf("%d",var[count]);
   getch();
   return 0;

}
==============================================================================


#include<stdio.h>
#include<conio.h>
void fun(int *ptr)
{
 *ptr=100;
}
int main()
{
   int num=50;
   int *pp='#';
   clrscr();

  fun(& *pp);
   printf("%d%d",num,*pp);
   getch();
   return 0;

}
============================================================================

#include<stdio.h>
#include<conio.h>
int main()
{
 int a=10,b=2;
 int *pa=&a,*pb=&b;
 printf("value=%d",*pa / *pb);
 getch();
 return 0;

}
=========================================================================
#include<stdio.h>
#include<conio.h>
int main()
{
 char ch=10;
 void *ptr=&ch;
 clrscr();

 printf("%d%d",*(char*)ptr,++(*(char*)ptr));
 getch();
 return 0;

}
==========================================================================

#include<stdio.h>
#include<conio.h>
char* strFun(void)
{
 char *str="IncludeHelp";
 return str;
}
int main()
{
   char *x;
   clrscr();
   x=strFun();
   printf("strvalue=%s",x);
   getch();
   return 0;

}
============================================================================

#include<stdio.h>
#include<conio.h>
int main()
{
 char *str []={"AAAAA","BBBBB","CCCCC","DDDDD"};
 char **sptr []={str+3,str+2,str+1,str};
 char ***pp;
 pp=sptr;
 ++pp;
 printf("%s",**++pp+2);
 getch();
 return 0;

}
============================================================================

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,charval='A';

 for(i=5;i>=1;i--)
 {
  for(j=0;j<i;j++)
   printf("%c",(charval+j));
   printf("\n");
   getch();
 }

}
===========================================================================

#include<stdio.h>
#include<conio.h>
void main()
{
 int tally=0;
 for(;;)
 {
 if(tally==10)
 break;
 printf("%d",++tally);
   printf("\n");
   getch();
 }
}
===========================================================================

#include<stdio.h>
#include<conio.h>
#define TRUE 1
void main()
{
 int loop=10;

 while(printf("Hello") && loop--)
   getch();
 }
=============================================================================

#include<stdio.h>
#include<conio.h>
int main()
{
 static int x[]={'A','B','C','D','E'},tally;

 for(tally=0;tally<sizeof(x)/sizeof(int);tally+=1)
 {

   printf("%c%c%c",*(x+tally)+1,x[tally]+1,*(tally+x)+1);


 }
  getch();
  return 0;

}
=============================================================================

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("value is=%d",(i=10++));
getch();

}
=============================================================================

#include<stdio.h>
#include<conio.h>
void main()
{
 const char var='A';
 ++var;
 printf("%c",var);
 getch();

}
=============================================================================

#include<stdio.h>
#include<conio.h>
void main()
{
 int x=10;
 x+=(x++)+(++x)+x;
 printf("%d",x);
 getch();

}
============================================================================
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10,b=2,x=0;
 x=a+b*a+10/2*a;
 printf("%d",x);
 getch();

}