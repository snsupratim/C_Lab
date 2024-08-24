// W.A.P TO SORTING THE ELEMENTS IN A 1D ARRAY BY INSERTION METHOD.
#include<stdio.h>
int main()
{
    int a[20],i,n,val,j;
    	printf("Enters number of element into array: ");
 	scanf("%d",&n);
 	printf("enter elements= \n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\n given array is \n ");
	 for(i=0;i<n;i++)
	 {
	 	printf("%2d",a[i]);
	 }
     for ( i = 1; i<n; i++)
     {
        /* code */
        val=a[i];
        j=i-1;
        while (j>=0 && a[j]>val)
        {
            /* code */
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=val;
        
     }
     printf("\n array after the sort is = \n ");
     for(i=0;i<n;i++)
     {
        printf("%2d",a[i]);
     }
     return 0;
     

}
