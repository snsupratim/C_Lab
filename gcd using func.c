#include<stdio.h>

int findgcd (int x,int y);
int main()
{
	int x,y,g;
	printf("enter tw integer = ");
	scanf("%d%d",&x,&y);
	g=findgcd(x,y);
	printf("the gcd is %d",g);
	return 0;
}

int findgcd( int a,int b)
{
	if((a%b)!=0)
	{
		findgcd(b,a%b);
	}
	else
	{
		return b;
	}
}
