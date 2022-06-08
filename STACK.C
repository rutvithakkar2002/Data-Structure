#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

void push()
{
	int num;
	if(top==SIZE-1)
	{
		printf("stack overflow");
	}
	else
	{
		printf("\n Enter a Number: ");
		scanf("%d",&num);
		top++;
		stack[top]=num;
	}
}
void pop()
{
	int num;
	if(top==-1)
	{
		printf("\n stack Underflow");

	}
	else
	{
		num=stack[top];
		top--;
		printf("\n%d pop",num);
	}

}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("\n %d",stack[i]);
	}
}

int main()
{
	int choice;
	while(-1)
	{
		printf("\n 0 For Exit");
		printf("\n 1 For Push");
		printf("\n 2 For POP");
		printf("\n 3 For Display");
		printf("\n Enter Your Choice: ");

		scanf("%d",&choice);

		switch(choice)
		{
			case 0:
				exit(0);
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				printf("\Invalid Choice");


		}
	}
	return 0;
}
