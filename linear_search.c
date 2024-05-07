#include<stdio.h>

int slSIt(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index if the key is found
    }
    return -1; // Return -1 if the key is not found
}

int slSRs(int arr[], int start, int end, int key) {
    if (start > end)
        return -1; // If the start exceeds end, return -1 (indicating not found)
    if (arr[start] == key)
        return start; // If the key is found at the start index, return the index
    return slSRs(arr, start + 1, end, key); // Recursive call with start index incremented
}

void main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int result = slSIt(arr, 5, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    key=40;
    int result = slSRs(arr, 0, 5-1, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");
}