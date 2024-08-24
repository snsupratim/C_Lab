  //assignment no 03
  
  #include<stdio.h>
  int main()
  {
  	int a,b;
  	printf("enter two integer = \n");
  	scanf("%d %d",&a,&b);
  	printf("Before swapping,the integers,a=%d b=%d",a,b);
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	printf("\nafter swapping,the integers,a=%d b=%d",a,b); 
  	return 0;
  	
  }
