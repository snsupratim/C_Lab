//dsa ass01: insert at any position

#include <stdio.h>


void AtaPosition(int arr[], int *size, int element, int position) {
	int i;
    if (position < 0 || position > *size) {
        printf("Invalid position\n");
        return;
    }

    for ( i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    (*size)++;
}

int main() {
    int arr[100];
    int size = 0,i;
    int choice, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert: ");
    scanf("%d", &position);
    AtaPosition(arr, &size, element, position);
          
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

