  #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[3][3],i,j,D1=0,D2=0;
 clrscr();
 printf("\n Enter the array elements");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);

 printf("\nThe array elements Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
 printf("\n");
 }
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 {
  if(i==j)
   D1=D1+a[i][j];
 else if((i==0 && j==2)||(i==j)||(i==2 && j==0))
      D2=D2+a[i][j];

 }
 D2=D2+a[1][1];
 printf("\n The Addition of Diagonals Are:\n D1=%d\nD2=%d",D1,D2);



 getch();
 }