#include<stdio.h>
int findgcd(int a,int b);
int main()
{
	int a,b,g;
	printf("enter a&b = ");
	scanf("%d%d",&a,&b);
	g=findgcd(a,b);
	printf("gcd is %d",g);
	return 0;
}

int findgcd(int num1,int num2)
{
	int remainder,ggg,numerator,denominator;
	 numerator = (num1>num2)?num1:num2;
    denominator = (num1<num2)?num1:num2;
    remainder = numerator % denominator;
 
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    ggg = denominator;
    
    return ggg;
}
