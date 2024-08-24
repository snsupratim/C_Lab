 #include<stdio.h>
 int main()
 {
 	int n,i,fact=1;
 	printf("enter the number=");
 	scanf("%d",&n);
 	if(n<0)
 	{
 		printf("\n factorial is invalid");
	 }
	 else
	 {
	 	for(i=1;i<=n;i++)
	 	{
	 		fact=fact*i;
		 }
		 printf(" \n the factorial is %d",fact);
	 }
	 return 0;
 }
