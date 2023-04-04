public class LinearSearch {
    public static int linearSearch(int[] arr, int x) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1; // element not found
    }
    
    public static void main(String[] args) {
        int[] arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}; // example array
        int x = 5; // element to search for
        int index = linearSearch(arr, x); // perform the linear search
        if (index == -1) {
            System.out.println(x + " not found in the array.");
        } else {
            System.out.println(x + " found at index " + index + ".");
        }
    }
}
