  
  
  #include<stdio.h>
  int main()
  {
  	int n,i,a[50],mid,temp;
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
	mid=n/2;
	for(i=0;i<mid;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf(" \n the reversed array is = \n ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
  }
