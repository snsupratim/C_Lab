#include<stdio.h>
float fact(int);
int main()
{
	int n;
	float res;
	printf("enter a number: ");
	scanf("%d",&n);
	res=fact(n);
	printf("y=%f",res);
	return 0;
}

float fact (int n)
{
	int i,j,f=1;
	float sum=0.0;
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		sum=sum+(1.0/(float)f);
	}
	return sum;
}
