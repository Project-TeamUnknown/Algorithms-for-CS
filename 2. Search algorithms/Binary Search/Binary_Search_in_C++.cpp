#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, target);
    if (result == -1) {
        cout << "Target not found." << endl;
    } else {
        cout << "Target found at index " << result << "." << endl;
    }
    return 0;
}
