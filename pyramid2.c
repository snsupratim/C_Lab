 #include<stdio.h>
 int main()
 {
 	int i,j,r;
 	printf("enter the row number=");
 	scanf("%d",&r);
 	for(i=1;i<=r;i++)
 	{
 		for(j=1;j<=i;j++)
 		{
 			printf("*");
		 }
		 printf("\n");
	 }
	 return 0;
 }
