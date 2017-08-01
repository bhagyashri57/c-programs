 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[3][3],i,j,R1=0,R2=0,R3=0;
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
 for(j=0;j<3;j++)
 {
 R1=R1+a[0][j];
 R2=R2+a[1][j];
 R3=R3+a[2][j];

 }
 printf("\n The Addition of Row Are:\n R1=%d\nR2=%d\n R3=%d",R1,R2,R3);



 getch();
 }