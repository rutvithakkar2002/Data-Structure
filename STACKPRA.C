#include<stdio.h>
#define SIZE 5
int top=-1;
int stack[SIZE];
void push()
{
	int num;
	if(top==SIZE-1)
	{
		printf("\n stack overflow");
	}
	else
	{
		printf("\n Enter a number: ");
		scanf("%d",&num);
		top=top+1;
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
		top=top-1;
		printf("\n %d pop",num);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d",stack[i]);
	}
}
int main()
{
	int choice;
	clrscr();

	while(-1)
	{
		printf("\n 0 Exit");
		printf("\n 1 push");
		printf("\n 2 pop");
		printf("\n 3 display");
		printf("\n Enter your choice: ");
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
				printf("Invalid choice!!");
		}

	}
	return 0;
}