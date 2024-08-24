// ass05

#include<stdio.h>
int main()
{
	int y;
	printf("enter the year = ");
	scanf("%d",&y);
	// leap year if perfectly divisible by 400
//	if(y%400==0)
//	{
//		printf("\n %d is a leap year",y);
//	}
//	else if(y%100==0)
//	{
//		printf("\n %d is not a leap year",y);
//	}
//	else if(y%4==0)
//	{
//		printf("\n %d is a leap year",y);
//	}
//	else{
//		printf("\n %d is not a leap year",y);
//	}
//if((y%4==0)&&(y%100!=0)||(y%400==0))
if((y%400==0)||(y%100!=0)&&(y%4==0))
{
	printf("%d is leap year",y);
}
else{
	printf("%d is not a leap year",y);
}
	return 0;
}
