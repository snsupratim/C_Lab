#include<stdio.h>
int main()
{
	char ltr= 'a';
	int i,j,s;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(s=i;s<5-i;s++)
		{
			printf("%c ",ltr++);
		}
		printf("\n");
	}
	return 0;
}
