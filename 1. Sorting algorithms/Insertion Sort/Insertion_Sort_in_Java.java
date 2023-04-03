public class InsertionSort {
    
    public static void insertionSort(int[] arr) {
        int n = arr.length;
        
        for (int i = 1; i < n; i++) {  // start with the second element of the array
            int key = arr[i];         // set the key to be the current element
            int j = i - 1;            // set j to be the index of the previous element
            
            /* Move elements of arr[0..i-1], that are greater than key, 
            to one position ahead of their current position */
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            
            arr[j + 1] = key;         // insert the key in its correct position
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {5, 2, 4, 6, 1, 3};
        
        insertionSort(arr);
        
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
