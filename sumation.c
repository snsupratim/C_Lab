#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y=0;
	printf("enter the integer=");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		y=y+pow(i,i);
	
	printf("the sumation is  %d ",y);
}
	return 0;
}
