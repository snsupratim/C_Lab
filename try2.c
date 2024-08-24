//  // sumation of all ven number in a range
//  
////  #include<stdio.h>
////  int main()
////  {
////  	int start , end,i,s=0;
////  printf("enter start and end = \n");
////  scanf("%d%d",&start,&end);
////  	
////  	if(start % 2 !=0)
////  	{
////  		start++;
////	  }
////  	
////  	for(i=start;i<=end;i+=2)
////  	{
////  	s+=i;
////	  }
////	  printf("sumation is = %d  ",s);
////	  return 0;
////  }
//  
//  #include <stdio.h>
//
//int factorial(int n) {
//    // Base case: factorial of 0 is 1
//    if (n == 0) {
//        return 1;
//    }
//
//    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
//    return n * factorial(n - 1);
//}
//
//int main() {
//    int num,result ;
//
//    printf("Enter a positive integer: ");
//    scanf("%d", &num);
//
//    // Check for invalid input
//    if (num < 0) {
//        printf("Error: Factorial is not defined for negative numbers.\n");
//        return 1;
//    }
//    result = factorial(num);
//    printf("The factorial of %d is %d.\n", num, result);
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdbool.h>

int main() {
    int start, end,number,i;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (number = start; number <= end; number++) {
        bool isPrime = true;

        if (number <= 1) {
            isPrime = false;
        }
		 else {
            for (i = 2; i * i <= number; i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", number);
        }
    }

    printf("\n");

    return 0;
}

