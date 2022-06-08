//linear search
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,key,found=0;
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
	printf("\n Enter Element you want to search: ");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("\n Element found at %dth position",i+1);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("Element is not present!");
	}
	getch();
}