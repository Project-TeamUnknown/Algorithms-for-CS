def linear_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1 # element not found

arr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5] # example array
x = 5 # element to search for
index = linear_search(arr, x) # perform the linear search
if index == -1:
    print(f"{x} not found in the array.")
else:
    print(f"{x} found at index {index}.")
