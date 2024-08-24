 #include<stdio.h>
  int main()
  {
  	int a[10][10],b[10][10],c[10][10];
  	int i,j,k,r,s;
  	printf("enter rows and coloums = ");
  	scanf("%d%d",&r,&s);
  	printf("\nEnter the value into 1st matrix= \n ");
  	for(i=0;i<r;i++)
  	{
  		for(j=0;j<s;j++)
  		{
  			scanf("%d",&a[i][j]);
		  }
	  }
      //transpose of a matrix
      
      for(i=0;i<r;i++)
      {
      	for(j=0;j<s;j++)
      	{
      		b[j][i]=a[i][j];
		  }
	  }
	  //multiplication of twp matrices
	  
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<r;j++)
	  	{
	  		c[i][j]=0;
	  		for(k=0;k<s;k++)
	  		{
	  			c[i][j]+=a[i][k]*b[k][j];
			  }
		  }
	  }
	  printf("the resultant array is : \n ");
	  
	  	for(i=0;i<r;i++)
	  	{
	  		for(j=0;j<r;j++)
	  		{
	  			printf("%d\t",c[i][j]);
			  }
			  printf("\n");
		  }
		  return 0;
	  }
