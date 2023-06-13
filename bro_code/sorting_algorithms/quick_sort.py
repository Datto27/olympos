# https://youtu.be/CBYHwZcbD-s?t=8825
# https://www.youtube.com/watch?v=PgBzjlCcFvc
# pivot - middle number - e.g. 5


unsorted_arr = [8, 2, 4, 7, 1, 3, 9, 6, 5]
# starting:  i, j,                     pivot 

def partition(arr, start, end):  # return pivot location
	
	pivot = arr[end]
	i = start - 1
	j = start

	while j <= end-1:
		# print("while start: ", arr)
		# print(i, j, arr[j])
		if (arr[j] < pivot):
			i += 1
			print(f"{arr[j]} < {pivot}, {i} index {arr[i]}")
			# tu j index-ze mdebare elemnti naklebia pivotze, mashin i index-ze mdebare elemnts gaucvlis adgils
			temp = arr[i]
			arr[i] = arr[j]
			arr[j] = temp

		j += 1

	i += 1
	temp = arr[i]
	arr[i] = arr[end]
	arr[end] = temp

	print(arr)

	return i



def quickSort(arr, start, end):
	if (end <= start): return  # base case, not divide array for len(arr)=0

	pivot = partition(arr, start, end)
	print("pivot index: ", pivot)
	quickSort(arr, start, pivot-1) # left array
	quickSort(arr, pivot+1, end)  # right array

	return arr


print(quickSort(unsorted_arr, 0, len(unsorted_arr)-1))

