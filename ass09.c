#include<stdio.h>
#include<math.h>
int main()
{
	int i,y=0;
//	printf("enter the integer=");
//	scanf("%d",&x);
	for(i=1;i<=5;i++)
	{
		y=y+pow(i,i);
	}
	printf("the sumation is  %d ",y);
	return 0;
}
