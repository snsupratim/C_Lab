#include<stdio.h>
int main()
{
	char lt='a';
	int i,j,s,r;
	printf("enter number of row: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++) // for row
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(s=1;s<=(r*2)-i;s++)
		{
			printf("%c ",lt++);
		}
		printf("\n");
	}
	return 0;
}
