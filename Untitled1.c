 #include<stdio.h>
 int main()
 {
 	int a;
 	float b;
 	char c;
 	double d;
 	printf("enter an integer, a float , a character , a double = \n");
 	scanf("%d %f %c %lf",&a,&b,&c,&d);
 	printf("\n a=%d",a);
 	printf("\n b=%f",b);
 	printf("\n c=%c",c);
 	printf("\n d=%lf",d);
 	printf("\n a=%u",&a);
 	printf("\n b=%u",&b);
 	printf("\n c=%u",&c);
 	printf("\n d=%u",&d); 
	printf("\n size of int: %u bytes",sizeof(a));	
	printf("\n size of int: %u bytes",sizeof(b));	
	printf("\n size of int: %u bytes",sizeof(c));
	printf("\n size of int: %u bytes",sizeof(d));	
 	return 0;
 }
