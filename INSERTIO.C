#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10]={10,20,30,40},i,n,pos,temp,temp1;
  char ch;
  clrscr();
  do
  {
  printf("\n*******MENU*******");
  printf("\n 1.Insertion.\n 2.Deletion. \n 3.Display\n Enter the choice:");
  ch=getch();
  switch(ch)
  {
  case '1' : printf("\n Enter the item and postion");
	   scanf("%d%d",&n,&pos);
	       temp=a[pos-1];
	  for(i=pos-1;i<10;i++)
	  {  temp1=a[i+1];
	     a[i+1]=temp;
	     temp=temp1;
	  }
	  a[pos-1]=n;
	  printf("\n%d is inserted at %d position",n,pos);
	  break;
  case '2' :printf("\n Enter the position ");
	  scanf("%d",&pos);
	 for(i=pos;i<9;i++)
	 a[i]=a[i+1];
	 pos--;
	 printf("%d is deleted from %d position",n,pos+1);
	 break;
  case '3' :printf("List is.......");
	 for(i=0;i<10;i++)
	 printf("%d\t",a[i]);
	 break;
  case '4':exit(0);
 default : printf("Invalid choice...plzz enter again...");break;

  }
  getch();
  }   while(ch!=4);

}