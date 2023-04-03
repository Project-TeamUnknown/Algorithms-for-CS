function insertionSort(arr) {
  const n = arr.length;
  
  for (let i = 1; i < n; i++) {  // start with the second element of the array
    const key = arr[i];         // set the key to be the current element
    let j = i - 1;              // set j to be the index of the previous element
    
    /* Move elements of arr[0..i-1], that are greater than key, 
    to one position ahead of their current position */
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    
    arr[j + 1] = key;           // insert the key in its correct position
  }
}

const arr = [5, 2, 4, 6, 1, 3];
insertionSort(arr);
console.log(arr);
