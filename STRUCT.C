#include<stdio.h>
#include<conio.h>
struct Student
{
	char name[30];
	int maths,sci,eng;
	float per;
};
void main()
{
     //	struct Student s;
	clrscr();
     /*	printf("Enter Your name & Subject Marks:");
	scanf("%s,%d,%d",s.name,&s.maths,&s.sci);
	printf("%s,%d,%d",s.name,s.maths,s.sci);       */
	struct Student s[3];
	int i;
	for(int i=0;i<10;i++)
	{
		printf("\n Enter name and subject marks: ");
		scanf("%s,%d,%d,%d,%f",s[i].name,s[i].maths,s[i].sci,s[i].eng);
		s[i].pr=(s[i].maths+s[i].sci+s[i].eng)/3;
	}
	for(int i=0;i<10;i++)
	{


	}

	getch();
}