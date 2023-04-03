def insertion_sort(arr):
    n = len(arr)
    
    for i in range(1, n):   # start with the second element of the array
        key = arr[i]       # set the key to be the current element
        j = i - 1          # set j to be the index of the previous element
        
        # Move elements of arr[0..i-1], that are greater than key, 
        # to one position ahead of their current position
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        
        arr[j + 1] = key   # insert the key in its correct position


arr = [5, 2, 4, 6, 1, 3]
insertion_sort(arr)
print(arr)
