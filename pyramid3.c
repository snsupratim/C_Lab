#include<stdio.h>
int main()
{
	int i,j,r,s;
	printf("enter the row=");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=(r-i);j++)
		{
			printf(" ");
		}
		for(s=1;s<=(2*i)-1;s++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
