def merge(arr, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid
    left_arr = arr[left:mid + 1]
    right_arr = arr[mid + 1:right + 1]
    i = j = 0
    k = left

    while i < n1 and j < n2:
        if left_arr[i] <= right_arr[j]:
            arr[k] = left_arr[i]
            i += 1
        else:
            arr[k] = right_arr[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = left_arr[i]
        i += 1
        k += 1

    while j < n2:
        arr[k] = right_arr[j]
        j += 1
        k += 1

def merge_sort(arr, left, right):
    if left < right:
        mid = (left + right) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)

arr = [5, 4, 3, 2, 1]
merge_sort(arr, 0, len(arr) - 1)
print(arr)
