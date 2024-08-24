  // assignment no 04
  
  #include<stdio.h>
  #include<math.h>
  int main()
  {
  	int p,r,t;
  	float mas,mac,t1;
  	printf("Enter the principle amount= ");
  	scanf("%d",&p);
  	printf("\nEnter the rate of interest= ");
  	scanf("%d",&r);
  	printf("\nEnter the time = ");
  	scanf("%d",&t);
  	mas=p+p*r*t/100.0;
  	t1=1+r/100.0;
  	mac=p*pow(t1,t);
  	printf("\n the simple interest is %f ",mas);
  	printf("\n the compound interest is %f ",mac);
  	return 0;
  	
  }
