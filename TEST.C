//selection sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[70],i,n,min,j,temp;
	clrscr();
	printf("\n How many elements you want to enter? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Before sorting Elements are: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
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
	printf("\n After sorting Elements are: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}