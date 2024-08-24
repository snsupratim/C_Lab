#include<stdio.h>
int main()
{
	int a,b,c;
	float sub,mult,sum,div;
	printf("enter two integer= \n");
	scanf("%d%d",&a,&b);
	printf("\n enter 1 for sumation = ");
		printf("\n enter 2 for substarction = ");
			printf("\n enter 3 for multiplication = ");
				printf("\n enter 4 for division = ");
				printf("\n enter choice = ");
				scanf("%d",&c);
				switch(c)
				{
					case 1: sum=(float)a+b;
					printf("\n the sumation is %0.2f",sum);
					break;
						case 2 : sub=(float)a-b;
					printf("\n the sumation is %0.2f",sub);
					break;
						case 3 : mult=(float)a*b;
					printf("\n the sumation is %0.2f",mult);
					break;
						case 4 : 
						if(b!=0)
						{
						div=(float)a/b;
					printf("\n the sumation is %0.2f",div);
				}
				else
				{
					printf("invalid");
				}
					break;
					
					defalut: 
					printf("\n wrong choice");
					break;
				}
				return 0;
	
	
}
