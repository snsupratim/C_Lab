#include<stdio.h>
  int main()
  {
  	int n,i,d,count=0;
  	printf("enter a number = ");
  	scanf("%d",&n);
  	for(i=1;i<=n;i++)
  	{
  		d=n%i;
  		if(d==0)
  		{
  			count=count+1;
		  }
	}
		  if(count==2)
		  {
		  	printf("the number is prime");
		  }
		  else
		  {
		  	printf("number is not prime");
		  }
		  return 0;
	  
  }
