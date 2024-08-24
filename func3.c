 #include<stdio.h>
 int main()
 {
 	int sum(int ,int );
 	int a,b,z;
 	
 	printf("enter two number: \n");
 	scanf("%d%d",&a,&b);
 	z=sum(a,b);
 	printf("\n the result is %d",z);
 }
 
 int sum(int x, int y)
 {
 
 int c;
  c=x+y;
  
 return c;
}
