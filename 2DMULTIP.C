 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[3][3],i,j,k,l,b[3][3],c[3][3]={0},sum=0;
 clrscr();
 printf("\n Enter the array elements for A");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);

  printf("\n Enter the array elements for B");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&b[i][j]);

 printf("\nThe A array elements Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
 printf("\n");
 }

  printf("\nThe B array elements Are:\n");
 for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
    printf("%d\t",b[i][j]);
 printf("\n");
 }
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)

      c[i][j]=0;
      for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
       {
	    sum=0;
	    for(k=0;k<3;k++)
	sum=sum+a[i][k]*b[k][j];
	c[i][j]=sum;
       }
     }

 printf("\n The matrix multiplication is:\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 printf("%d\t",c[i][j]);
 printf("\n") ;
}



  getch();
 }

