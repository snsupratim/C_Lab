//ass06

#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("enter all 3 number = \n" );
	scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    min=(a<b)?(a<c?a:c):(b<c?b:c);
    printf("\n %d is max",max);
    printf("\n %d is min",min);
    return 0;
	
}
