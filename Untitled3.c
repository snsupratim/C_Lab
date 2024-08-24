#include<stdio.h>
int main()
{
	int i,s=0;
	printf("number are divisible by 7 are....");
	for(i=100;i<=150;i++)
	{
		if(i%7==0)
		{
			printf("\n %8d is divisible",i);
			s+=i;
		}
		else
		{
			printf("\n %8d isnot divisible",i);
		}
	}
	printf("\n the sum id %d",s);
	return 0;
}
