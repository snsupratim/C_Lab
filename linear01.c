//Linear search

#include <stdio.h>

int main() {
    int a[50], n, i, j, key, flag=0;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n given array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }
    
    printf("\nenter the key : ");
    scanf("%d", &key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
{
    i=i+1;
    printf("\n element is found into the array at %d pos",i);
}
else
{
    printf("\nelement is not found into the array");
}

    return 0;
}



