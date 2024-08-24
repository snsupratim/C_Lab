 #include<stdio.h>
 int main()
 {
 	int n,i,fact=1,s=0;
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
	 		s=s+fact;
		 }
		 
		 printf(" \n the factorial is %d",s);
	 }
	 return 0;
 }
