#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
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
		for(j=0;j<5-1;j++)
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
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	getch();

}