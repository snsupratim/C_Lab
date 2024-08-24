 #include<stdio.h>
 int main()
 {
 	int rows,i,j,s;
 	int alphabet=65;
 	printf("enter the row number = ");
 	scanf("%d",&rows);
 	for(i=0;i<=rows-1;i++)
 	{
 		for(j=0;j<=i;j++)
 		{
 			printf(" ");
		 }
		 for(s=0;s<=rows-i-1;s++)
		 {
		 	printf("%c ",alphabet++);
		 }
		 printf("\n");
	 }
	 return 0;
 }
