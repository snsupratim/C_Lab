

#include <stdio.h>

void insertAtBeginning(int arr[], int *size, int element) {
	int i;
    for ( i = *size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
    (*size)++;
}

void insertAtEnd(int arr[], int *size, int element) {
    arr[*size] = element;
    (*size)++;
}

void insertAtPosition(int arr[], int *size, int element, int position) {
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
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5,i;
    int choice, element, position;

    printf("Choose an option:\n");
    printf("1. Insert at the beginning\n");
    printf("2. Insert at the end\n");
    printf("3. Insert at any position\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the element to insert at the beginning: ");
            scanf("%d", &element);
            insertAtBeginning(arr, &size, element);
            break;
        case 2:
            printf("Enter the element to insert at the end: ");
            scanf("%d", &element);
            insertAtEnd(arr, &size, element);
            break;
        case 3:
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            insertAtPosition(arr, &size, element, position);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Array after insertion:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


