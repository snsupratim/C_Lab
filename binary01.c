#include <stdio.h>

int main() 
{
    int a[50], n, i, key, mid,flag=0, first=0, last, position=-1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    last=n-1;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nYour Given array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }
    
    printf("\nEnter the number to be search: ");
    scanf("%d", &key);
  
   while(first<=last)
   {
       mid=(first+last)/2;
        if(a[mid]==key)
        {
            flag=1;
            position = mid;
            break;
        }
        
        else
        {
            if(a[mid]<key)
            {
                first = mid+1;
            }
            else
            {
                last= mid-1;
            }
        }
        }
   
    if(flag==1)
{
    i=i+1;
    printf("\nElement found at %dth position", i);
}
else
{
    printf("\nElement is not found!");
}

    return 0;
}
