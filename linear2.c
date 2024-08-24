#include<stdio.h>

int main()
{
    int a[20], n, i, j, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("\nEnter the values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nYour given array is: ");
    for(i=0;i<n;i++)
    {
        scanf("%d ", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            {
                pos=j;
            }
        }
        if(i!=0)
        {
            a[i]=a[pos];
        }
    }
    
        printf("\nYour sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
return 0;

}
