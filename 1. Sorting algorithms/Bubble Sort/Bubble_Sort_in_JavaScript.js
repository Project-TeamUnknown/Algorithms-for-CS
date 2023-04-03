function bubbleSort(arr) {
    let n = arr.length;
    
    // Outer loop to iterate through each element of the array
    for (let i = 0; i < n; i++) {
        
        // Inner loop to compare each pair of adjacent elements
        for (let j = 0; j < n-i-1; j++) {
            
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j+1]) {
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

let arr = [5, 2, 6, 3, 1, 4]; // Example array to sort

console.log("Unsorted array:");
console.log(arr);

bubbleSort(arr); // Call the bubbleSort function

console.log("Sorted array:");
console.log(arr);
