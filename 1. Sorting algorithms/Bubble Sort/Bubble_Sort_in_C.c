#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    
    // Outer loop to iterate through each element of the array
    for (i = 0; i < n - 1; i++) {
        
        // Inner loop to compare each pair of adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 6, 3, 1, 4}; // Example array to sort
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
    
    printf("Unsorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    bubble_sort(arr, n); // Call the bubble_sort function
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}