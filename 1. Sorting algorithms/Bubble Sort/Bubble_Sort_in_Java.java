public class Bubble_Sort_in_Java {
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        int temp = 0;
        
        // Outer loop to iterate through each element of the array
        for (int i = 0; i < n; i++) {
            
            // Inner loop to compare each pair of adjacent elements
            for (int j = 1; j < (n - i); j++) {
                
                // If the current element is greater than the next element, swap them
                if (arr[j-1] > arr[j]) {
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {5, 2, 6, 3, 1, 4}; // Example array to sort
        
        System.out.println("Unsorted array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        
        bubbleSort(arr); // Call the bubbleSort function
        
        System.out.println("Sorted array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
