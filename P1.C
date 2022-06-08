#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main()
{
	int i,a[SIZE],j,temp;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter Element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Before sorting elements are: ");
	for(i=0;i<SIZE;i++)
	{
		printf(" %d",a[i]);
	}
	for(i=1;i<SIZE;i++)
	{
		for(j=0;j<SIZE-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n After Sorting:");
	for(i=0;i<SIZE;i++)
	{
		printf(" %d",a[i]);
	}


	getch();
}