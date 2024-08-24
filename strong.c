//#include<stdio.h>
//int main()
//{
//	int n,i,fact=1,sum=0,j,d;
//	printf("enter the number=");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		d=n%10;
//		for(j=1;j<=d;j++)
//		{
//			fact=fact*j;
//				
//		}
//		sum=sum+fact;
//		n=n/10;
//	}
//	if(sum==n)
//	{
//		printf("the number is strong");
//	}
//	else
//	{
//		printf("the number is not strong");
//	}
//	return 0;
//}
#include<stdio.h>
int main(){
   int n,i;
   int fact,rem;
   printf("Enter a number : ");
   scanf("%d",&n);
   printf(" ");
   int sum = 0;
   int temp = n;
   while(n){
      i = 1,fact = 1;
      rem = n % 10;
      while(i <= rem){
         fact = fact * i;
         i++;
      }
      sum = sum + fact;
      n = n / 10;
   }
   if(sum == temp)
      printf("%d is a strong number",temp);
   else
      printf("%d is not a strong number",temp);
   return 0;
}
