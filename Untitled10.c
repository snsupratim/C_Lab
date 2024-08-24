#include<stdio.h>
int main()
{
	int i,d,sum=0;
	for(i=100;i<=300;i++)
	{
		d=i%5;
		if(d==0)
		{
			sum=sum+i;
//			count++;
		}
	}
	printf("the sumation is % d",sum);
	return 0;
}
