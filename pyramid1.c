#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("enter row number= ");
	scanf("%d",&r);
	printf("enter coloumn=");
	scanf("%d",&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
