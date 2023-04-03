#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, j, key;
    
    for (i = 1; i < n; i++) {   // start with the second element of the array
        key = arr[i];           // set the key to be the current element
        j = i - 1;              // set j to be the index of the previous element
        
        /* Move elements of arr[0..i-1], that are greater than key, 
        to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;       // insert the key in its correct position
    }
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertion_sort(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
