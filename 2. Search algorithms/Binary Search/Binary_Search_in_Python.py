def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    
    while low <= high:
        mid = low + (high - low) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    
    return -1 # Target not found

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
target = 7
result = binary_search(arr, target)
if result == -1:
    print("Target not found.")
else:
    print(f"Target found at index {result}.")
