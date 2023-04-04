function binarySearch(arr, target) {
  let low = 0;
  let high = arr.length - 1;

  while (low <= high) {
    let mid = Math.floor((low + high) / 2);

    if (arr[mid] === target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1; // Target not found
}

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let target = 7;
let result = binarySearch(arr, target);
if (result === -1) {
  console.log("Target not found.");
} else {
  console.log(`Target found at index ${result}.`);
}
