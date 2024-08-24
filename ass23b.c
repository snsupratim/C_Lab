#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int roll;
	char name[100];
	int marks;
}STD;

int main()
{
	int i,n, max;
	STD *stu;
	printf("\nEnter the number of students: ");
	scanf("%d", &n);
	fflush(stdin);
	stu = (STD *)calloc(n,sizeof(STD));
	
	printf("\nEnter roll, name and marks for %d students",n);
	for(i=0; i< n; i++)
	{
		puts("\nRoll: ");
		scanf("%d", &stu[i].roll);;
		fflush(stdin);
		puts("\nName: ");
		gets(stu[i].name);
		fflush(stdin);
		puts("\nMarks: ");
		scanf("%d", &stu[i].marks);
		fflush(stdin);
	}
	max = stu[0].marks;
	for(i = 1; i < n ; i++)
	{
		if(stu[i].marks > max)
						max = stu[i].marks;
	}
	
	puts("\nHighest Marks received by: ");	
	for(i = 0; i < n ; i++)
	{
		if(stu[i].marks== max)
						  puts(stu[i].name);
	}
	return 0;
	
}
