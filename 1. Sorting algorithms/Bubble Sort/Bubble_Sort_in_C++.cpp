#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    // Outer loop to iterate through each element of the array
    for (int i = 0; i < n; i++) {
        
        // Inner loop to compare each pair of adjacent elements
        for (int j = 0; j < n-i-1; j++) {
            
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 6, 3, 1, 4}; // Example array to sort
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    bubbleSort(arr, n); // Call the bubbleSort function
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
