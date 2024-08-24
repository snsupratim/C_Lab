 // W.A.P TO SORT  THE ELEMENTS IN DESCENDING ORDER IN  A 1D ARRAY BY BUBBLE METHOD.
 
 #include<stdio.h>
 int main()
 {
 	int a[20],i,j,t,n;

	printf("Enters number of element into array: ");
 	scanf("%d",&n);
 	printf("enter elements= \n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\n given array is \n ");
	 for(i=0;i<n;i++)
	 {
	 	printf("%2d",a[i]);
	 	printf("\n");
	 }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
			
		}
	 }
	printf("\n after sorting the array is=\n");
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
		printf("\n");
	  }  
	return 0;  
 }
