#include<stdio.h>
int main()
{
	int max(int x,int y,int z);
	int a,b,c,m;
	printf("enter three number = \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n a=%d b=%d c=%d",a,b,c);
	m=max(a,b,c);
	printf("\n the largest among these three is %d",m);
	
}

int max (int x, int y, int z)
{
	int big;
//	printf("\n x=%d y=%d z=%d",x,y,z);
	big=x;
	if(y>big)
	big=y;
	if(z>big)
	big=z;
	return (big);
	
}
