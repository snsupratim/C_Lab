 #include<stdio.h>
 int main()
 {
 	int i,num,sum;
 	for(i=1;i<=20;i++)
 	{
 		printf("1");
 		sum=1;
 		for(num=2;num<=i;num++)
 		{
 			printf("+%d",num);
 			sum+=num;
		 }
		 printf("=%d\n",sum);
	 }
	 return 0;
 }
