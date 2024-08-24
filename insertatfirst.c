//dsa : insert at beginning

#include <stdio.h>

void AtBeginning(int arr[], int *size, int element) {
	int i;
    for ( i = *size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
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

    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &element);
    AtBeginning(arr, &size, element);
    

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

