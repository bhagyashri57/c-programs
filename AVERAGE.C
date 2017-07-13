#include<stdio.h>
void main()
{
	int a[10],s=0;
	printf("Enter the number:");
	for(int i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	s=s+a[i];
	}
	getch();

}