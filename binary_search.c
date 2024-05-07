#include<stdio.h>

int bSIt(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid; // Return index if key is found at mid
        else if (arr[mid] < key)
            low = mid + 1; // If key is greater, search in right half
        else
            high = mid - 1; // If key is smaller, search in left half
    }
    return -1; // If key is not found, return -1
}

int bSRs(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid; // Return index if key is found at mid
        else if (arr[mid] < key)
            return bSRs(arr, mid + 1, high, key); // Search in right half
        else
            return bSRs(arr, low, mid - 1, key); // Search in left half
    }
    return -1; // If key is not found, return -1
}

void main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int result = bSIt(arr, 5, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    key=40;
    int result = bSRs(arr, 0, 5-1, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");
}