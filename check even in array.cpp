// even numbers 

#include<stdio.h>
int main()
{
	int i,n,a[50],even;
	
	printf("enter numbers to enter in the array = ");
	scanf("%d",&n);
	printf("enter the element into the array = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the given array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%8d",a[i]);
	}
	even=0;
	printf("\n the even numbers are = \n");
	
	for(i=0;i<n;i++)\
	{
		if(a[i]%2 ==0)
		{
			even++;
			printf("%d",a[i]);
		}
	}
	if(even == 0)
	{
		printf("there is no even number");
	}
	return 0;
}
