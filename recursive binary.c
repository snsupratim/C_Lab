#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        } else {
            return binarySearch(arr, mid + 1, right, target);
        }
    }

    return -1; // Target element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int target = 8;
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, length - 1, target);

    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}

