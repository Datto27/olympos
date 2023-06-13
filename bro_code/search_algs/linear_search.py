# runtime complexity big O(n)
# disadvantages: slow for large data sets

arr = [2, 46, 86, 32, 3, 53, 4]

def linear_search(arr, val):

	for i, el in enumerate(arr):
		if (el == val):
			return f"element found on {i} index"

	return "element not found"


print(linear_search(arr, 32))