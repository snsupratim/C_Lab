// swappig without 3r variable

#include<stdio.h>
int main()
{
	int a,b ;
	printf("enter the two integer = \n");
	scanf("%d%d",&a,&b);
	printf("before swapping numbers are a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swapping a=%d b=%d",a,b);
	return 0;
}
