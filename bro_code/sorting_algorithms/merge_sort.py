# O(n log n) - using more space then bubble/Insertion sort, becouse of sub arraies
# https://youtu.be/CBYHwZcbD-s?t=7918


unsorted_arr = [2, 8, 4, 1, 3]

def merge(leftArr, rightArr, arr):
	print("arraies for merge: ", leftArr, rightArr, arr)
	leftSize = len(arr) // 2
	rightSize = len(arr) - leftSize
	i = l = r = 0  # indexes

	# subarray-is lementebis shedareba da mati dasortirebulad gaertianeba
	# check the conditions for merging-shertskma
	while l < leftSize and r < rightSize:
		# mag 4 (shedareba) 1 --> 4 (shedareba) 3 --> [1, 3] + 4 daemateba bolo while-shi
		if (leftArr[l] < rightArr[r]):
			arr[i] = leftArr[l]
			i += 1
			l += 1
		else:
			arr[i] = rightArr[r]
			i += 1
			r += 1

	#  if there is odd amount of items in any subarray
	while l < leftSize:
		arr[i] = leftArr[l]
		i += 1
		l += 1

	while r < rightSize:
		arr[i] = rightArr[r]
		i += 1
		r += 1

	print("merged array: ", arr)

	return arr



def merge_sort(arr):
	print("array: ", arr)
	length = len(arr)

	# if subarray contains only one item
	if (length <= 1): return  # base case 

	middle = length//2
	leftArr = arr[:middle]
	rightArr = arr[middle:]

	i = 0 
	l = 0  # left array
	j = 0  # right array

	while i < length:
		print("i index element: ", arr[i])
		if (i < middle):
			leftArr[l] = arr[i]
			l += 1
		else:
			rightArr[j] = arr[i]
			j += 1

		i += 1

	# split array, by recursion
	# [2, 8, 4, 1, 3] --> [2, 8] --> [2] & [8] 
	merge_sort(leftArr)  
	# [4, 1, 3] --> [4] & [1, 3] --> [1] & [3]
	merge_sort(rightArr)
	# after this start compare and merge of arrays
	# merge
	mergedArr = merge(leftArr, rightArr, arr)
	# print("sorted: ", mergedArr)
	return mergedArr


print("result: ", merge_sort(unsorted_arr))


# მასივი იშლება საბერეებად რომელებშიც იქნება მხოლოდ ერთი ელემენტი
# კეთდება შედარება და ჯგუფდება ახალის დასორტილი მასივები მათ სრულ შერწყმამდე
