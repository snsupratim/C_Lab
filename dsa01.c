#include<stdio.h>

void addToFirst(int arr[], int* size, int element) {
    int i;
    (*size)++;
    for (i = *size - 1; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
}

void addToLast(int arr[], int* size, int element) {
    arr[*size] = element;
    (*size)++;
}

void addToPosition(int arr[], int* size, int element, int position) {
    int i;
    (*size)++;
    for (i = *size - 1; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element; 
}

int main() {
    int arr[100];
    int size = 0, element, position, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to add at the first position: ");
    scanf("%d", &element);
    addToFirst(arr, &size, element);
    printf("Enter the element to add at the last position: ");
    scanf("%d", &element);
    addToLast(arr, &size, element);
    printf("Enter the element to add at a specific position: ");
    scanf("%d", &element);
    printf("Enter the position: ");
    scanf("%d", &position);
    addToPosition(arr, &size, element, position);
    printf("Array after adding elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
