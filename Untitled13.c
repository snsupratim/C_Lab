#include <stdio.h>

int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int (*ptr)[3] = arr; 
	int i,j; // Declare and initialize the pointer with the base address of the array

    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));  // Access and print the element using the pointer
        }
        printf("\n");
    }

    return 0;
}

