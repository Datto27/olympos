# O(log n)
# search algorithm that finds the postion of a target 
# value within a sorted array.
# Half of the array is eliminated during each "step"
# very good for large datasets

arr = list(range(0, 10000))
target = 343

def binary_search(arr, target):
	# print(arr)
	low = 0
	high = len(arr)-1
	for i, el in enumerate(arr):
		middle = low + (high - low) // 2
		# print("middle index: ", middle)
		value = arr[middle]  # middle element
		# check if target is greater, lower or equal of middle element, for split array
		if (target > value): low = middle + 1
		elif (target < value): high = middle - 1
		else: return f"found element: {middle}. \nactions: {i+1}"

	return "target not found"

print(binary_search(arr, target))
# print(arr.index(target))