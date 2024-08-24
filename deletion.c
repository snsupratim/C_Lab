 #include<stdio.h>
int main()
{
	int i,n,a[50],pos;
	
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
	printf("\n enter the position of deletion= ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i-1]=a[i];
	}
	a[n-1]=0;
	printf("array after deletion is : \n ");
	for(i=0;i<n-1;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
