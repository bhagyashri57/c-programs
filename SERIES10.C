/*#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x,n,i,s=0;
 printf("Enter the value of n and X");
 scanf("%d%d",&n,&x);
 for(i=5;i<=n;i=i+2)
 {
  s=s+pow(x+(i-4),i);
  printf("(%d+%d)^%d+",x,(i-4),i);
 }
 printf("\n The sum of series is=%d",s);
 getch();

} */

/*//====================================OR===============================
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x,n,i;short int s=0,j;
 printf("\nEnter the value of n and X");
 scanf("%d%d",&n,&x);
 for(i=5,j=1;i<=n;i=i+2,j++)
 {
  s=s+pow((x+j),i);

 //printf("\n s=%d",s);
  printf("(%d+%d)^%d+",x,j,i);
 }
 printf("\n The sum of series is=%d",s);
 getch();

}*/

//=====================================OR==================================
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x,n,i,s=0;
 clrscr();
 printf("Enter the value of X and n");
 scanf("%d%d",&x,&n);
 for(i=5;i<=n;i=i+2)
 {
  s=s+pow(x,i);
  printf("%d^%d+",x,i);
 }
 printf("\n The sum of series is=%d",s);
 getch();


}