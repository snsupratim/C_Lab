// binary search

#include<stdio.h>
 int main()
 {
 	int a[30],i,mid,k,n;
 	printf("enter the size of the array = ");
 	scanf("%d",&n);
 	printf("enter the elements= \n" );
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\nYour Given array is: \n ");
    for(i=0;i<n;i++)
    {
        printf("%2d", a[i]);
    }
    
	 printf("\nenter the key=");
	 scanf("%d",&k);
	 int s=0,e=n-1,loc=-1;
	 while(s<=e)
	 {
	 	mid=(s+e)/2;
	 	if(a[mid]==k)
	 	{
	 		loc=mid;
	 		break;
		 }
		 else
		 {
		 	if(k>a[mid])
		 	{
		 		s=mid+1;
			 }
			 else
			 {
			 	e=mid-1;
			 }
		 }
	 }
	 if(loc!=-1)
	 {
	 	printf("element is present in there in index  %d",loc);
	 }
	 else
	 {
	 	printf("element is not present in the array");
	 }
	 return 0;
 }
