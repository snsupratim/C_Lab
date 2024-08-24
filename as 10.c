//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int t,n,r,y;
//	printf("enter a number = ");
//	scanf("%d",&n);
//	
//}

#include<stdio.h>
int main()
{
int n, r, s=0, t;
printf("Enter number to check Armstrong number ");
scanf("%d", &n);
t = n;
while(n > 0)
{
r = n % 10;
s = s+ (r * r * r);
n = n / 10;
}
if(t == s)
{
printf("Entered number is Armstrong Number.");
printf("\n");
}
else
{
printf("Entered number is not Armstrong Number.");
printf("\n");
}
return 0;
}
