C//ass07

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,r1,r2;
	printf("enter the three integer= \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a!=0)
	{
		d=pow(b,2)-4*a*c;
		if(d<0)
		{
			printf("no real root");
		}
		else if(d==0)
		{
			r1=-b/(2.0*a);
			printf("%f root are equal and it is real",r1);
		}
		else
		{
		
			r1=(-b+sqrt(d))/(2*a);
	    	r2=(-b-sqrt(d))/(2*a);
	    	printf("two different roots are %f and %f",r1,r2);
		}
	}
	else
	{
		printf("not quadratic equation");
	}
	return 0;
}
