//dsa: insert at end

#include <stdio.h>
void AtEnd(int arr[], int *size, int element) {
    arr[*size] = element;
    (*size)++;
}

int main() {
    int arr[100];
    int size = 0,i;
    int element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   printf("Enter the element to insert at the end: ");
   scanf("%d", &element);
     AtEnd(arr, &size, element);
          
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

