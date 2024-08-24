#include<stdio.h>
void fibo1(int a,int b,int n);
int main()
{
	int n;
	printf("nterthe range = \n");
	scanf("%d",&n);
	fibo1(0,1,n);
	return 0;
}

void fibo1(int a,int b,int n)
{
	if(n>0)
	{
		printf("%d\t",a);
		fibo1(b,a+b,n-1);
	}
}
