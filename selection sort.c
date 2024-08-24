 // W.A.P TO SORTING THE ELEMENTS IN A 1D ARRAY BY SELECTION METHOD.
 #include<stdio.h>
 int main()
 {
 	int a[50],n,i,j,pos,t;
 
 	printf("Enters the number of element into array: ");
 	scanf("%d",&n);
 	printf("enter the elements= \n ");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("given array is \n ");
	 for(i=0;i<n;i++)
	 {
	 	printf("%2d",a[i]);
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	pos=i;
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[pos]>a[j])
	 		{
	 			pos=j;
			 }
		 }
		 if(i!=pos)
		 {
		 	t=a[i];
		 	a[i]=a[pos];
		 	a[pos]=t;
		 }
	 }
	 printf("\n after sorting the array is = \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);
	 	printf("\n");
	 }
	 
	 return 0;
	 }
