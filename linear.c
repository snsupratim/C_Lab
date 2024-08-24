 
 // Linear search 
 
 #include<stdio.h>
 int main()
 {
 	int a[30],i,k,n;
 	printf("enter the element of the array = ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("enter the key=");
	 scanf("%d",&k);
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]==k)
	 	{
	 		printf("the key is present in there");
	 		break;
		 }
		 else
		 {
		 	printf("the key is not present");
		 	break;
		 }
	 }
	 return 0;
}
