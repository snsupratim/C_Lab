// reag an employ dta


#include<stdio.h>


struct employ
{
	int emp_no;
	char name[30];
	char department[30];
	char designation[30];
}emp;


int main()
{
	printf("enter record:  \n\n");
	printf("enter number : ");
	scanf("%d", &emp.emp_no);
	fflush(stdin);
	printf("enter name: ");
	gets(emp.name);
	printf("entyer department: ");
	gets(emp.department);
	printf("enter designation: ");
	gets(emp.designation);
	
	printf("\n entered recorsd are: \n\n");
	printf("\n emp number: %d",emp.emp_no);
	printf("\n emp name: %s",emp.name);
	printf("\n emp department: %s",emp.department);
	printf("\n emp designation: %s",emp.designation);
	return 0;
}
