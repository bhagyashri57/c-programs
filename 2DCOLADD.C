 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[3][3],i,j,c1=0,c2=0,c3=0;
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
 {
 c1=c1+a[i][0];
 c2=c2+a[i][1];
 c3=c3+a[i][2];

 }
 printf("\n The Addition of coloumn Are:\nc1=%d\nC2=%d\nC3=%d",c1,c2,c3);



 getch();
 }