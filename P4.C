//binary search
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,key,mid,low=0,high=5-1,flag=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\t",a[i]);
	}
	printf("\n Enter key you want to find: ");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;

		if(a[mid]==key)
		{
			flag=1;
			printf("\n%d is found at %dth position",key,mid+1);
			break;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==0)
	{
		printf("\n%d Not Found",key);
	}
	getch();
}