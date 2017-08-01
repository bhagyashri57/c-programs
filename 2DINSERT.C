#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j,pos[1][1],item,r,w;
 printf("\n Enter the array elemnets :");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);

 printf("\nThe array elements are :\n");
 for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
 printf("%d\t",a[i][j]) ;
 printf("\n") ;

 }
 printf("\nEnter the number");
 scanf("%d",&item);
  printf("\nEnter the postion of row and col");
 scanf("%d%d",&r,&w);
	a[r][w]=item;
	printf("\n The item is inserted");



 printf("\n After insertion......\n");
  for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
     printf("%d\t",a[i][j]) ;
   printf("\n") ;
 }
  printf("\nEnter the number to be deleted");
 scanf("%d",&item);
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	    if(item==a[i][j])
	    {
	       a[i][j]=0;
	printf("\n The item is deleted");

	    }
  }
    printf("\n After deletion......\n");
  for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
     printf("%d\t",a[i][j]) ;
   printf("\n") ;
 }
getch();
}