#include<stdio.h>

void swap2(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int a,b;
	printf("enter two integer = \n");
	scanf("%d%d",&a,&b);
	

	
		printf("\n call by address");
	printf("\nbefore swap a=%d b=%d",a,b);
	swap2(&a,&b);
	printf("\n after swap a=%d b=%d",a,b);
	
	return 0;
	
}
