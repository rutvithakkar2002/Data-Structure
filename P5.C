//Selection Sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,min,temp;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Before Sorting:");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	for(i=0;i<5-1;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\nAfter Sorting: ");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	getch();

}