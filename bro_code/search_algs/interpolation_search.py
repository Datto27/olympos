# improved binary search
# საუკეთესოდ გამოიყენება თანაბრად განაწილებული მონაცემების გამოსაცნობად, სადაც მნიშვნელობა შეიძლება ეფუძნებოდეს გამოთვლილ გამოკვლევის შედეგებს

# avarage case: O(log(log(n)))
# worst case: O(n) [values increase exponently]

arr = [1, 3, 6, 7, 9, 15, 21, 33, 54, 61, 73, 76, 82, 99]

def interpolite_search(arr, val):
	high = len(arr) - 1  # max index
	low = 0

	while (val >= arr[low] and val <= arr[high] and low <= high):
		print(f"low: {low}; high: {high}")
		probe = int(
			low + (high-low) * (val-arr[low]) / (arr[high]-arr[low])
		)
		print("probe: ", probe)
		
		if (arr[probe] == val):
			return probe
		elif(arr[probe] < val):
			low = probe + 1
		else:
			high = probe - 1


	return -1

print("element found on index: ", interpolite_search(arr, 54))