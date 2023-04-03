def bubble_sort(arr):
    n = len(arr)
    
    # Outer loop to iterate through each element of the array
    for i in range(n):
        
        # Inner loop to compare each pair of adjacent elements
        for j in range(0, n-i-1):
            
            # If the current element is greater than the next element, swap them
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

arr = [5, 2, 6, 3, 1, 4] # Example array to sort

print("Unsorted array:")
print(arr)

bubble_sort(arr) # Call the bubble_sort function

print("Sorted array:")
print(arr)
