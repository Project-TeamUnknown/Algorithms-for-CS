function quickSort(arr, low, high) {
    if (low < high) {
        let p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

function partition(arr, low, high) {
    let pivot = arr[high];
    let i = low - 1;

    for (let j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            [arr[i], arr[j]] = [arr[j], arr[i]];
        }
    }
    [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]];
    return i + 1;
}

let arr = [10, 7, 8, 9, 1, 5];
let n = arr.length;
quickSort(arr, 0, n - 1);
console.log("Sorted array: " + arr);
