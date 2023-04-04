function linearSearch(arr, x) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === x) {
      return i;
    }
  }
  return -1; // element not found
}

const arr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]; // example array
const x = 5; // element to search for
const index = linearSearch(arr, x); // perform the linear search
if (index === -1) {
  console.log(`${x} not found in the array.`);
} else {
  console.log(`${x} found at index ${index}.`);
}
