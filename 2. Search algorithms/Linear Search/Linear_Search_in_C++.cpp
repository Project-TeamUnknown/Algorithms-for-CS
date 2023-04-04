#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // element not found
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}; // example array
    int n = sizeof(arr) / sizeof(arr[0]); // number of elements in the array
    int x = 5; // element to search for
    int index = linear_search(arr, n, x); // perform the linear search
    if (index == -1) {
        cout << x << " not found in the array." << endl;
    } else {
        cout << x << " found at index " << index << "." << endl;
    }
    return 0;
}
