#include <iostream>
#include "bits/stdc++.h"


// space complexity - O(n)
// runtime complexity O(n*logn)
// ამ ალგორითმის დროს პირველ რიგში მასივი იშლება სხვა პატარა მასივებად სანამ თითოეულ მასივში არ იარსებებს მხოლოდ ერთი ელემენტი

int* slice(int array[], int start, int end) {
	// მასივის გასაყოფად შექმნილი ფუნქცია
	// ეს ფუნქცია პირდაპირ არ მონაწილეობს ალგორითმში (სხვა ენებში შეიძლება ჩასენებულის გამოყენება)
	int new_arr[] = {};
	int length = sizeof(array)/sizeof(int);
	for(int i=start; i<end; i++) {
		std::cout << array[i];
	}
	return {};
}

void merge_sort(int array[], int length) {

	if(length <= 1) return; // base case, ამ შემთვევაში უკვე აღარაა მასივის გაყოფა საჭირო

	int middle = length / 2;
}

void merge(int leftArr[], int rightArr[], int array[]) {

}

int main() {
	int my_arr[] = {8, 2, 5, 3, 4, 7, 6, 1};
	int *arr[] = {};
	arr[0] = &my_arr[3];
	std::cout << arr[0];
	int length = sizeof(my_arr)/sizeof(int); // array length

	merge_sort(my_arr, length);

	for(int i=0; i<length; i++) {
		std::cout << my_arr[i] << " ";
	}

	return 0;
}

/*
1) მასივის დაშლა
				 [3, 7, 8, 5, 4, 2, 6, 1]
			[3, 7, 8, 5]		 [4, 2, 6, 1]
		 [3, 7]	   [8, 5]	  	[4, 2]   [6, 1]
	   [3] [7]     [8] [5]	   [4] [2]   [6] [1]

2) merge, ამ დაშლილი მასივების თითოეული ელემენტი დარდება ერთმანეთს და ისე იქმნება ახალი მასივი
	1) 3 & 7 --> [3, 7]   
	2) 8 & 5 --> [5, 8]
	[3, 7] & [5, 8]
	3) 3 & 5 --> [3, , ,]
	4) 7 & 5 --> [3, 5, ,]
	5) 7 & 8 --> [3, 5, 7, 8]
	......
			 	[1, 2, 3, 4, 5, 6, 7, 8]
			[3, 5, 7, 8]		 [1, 2, 4, 6]
		 [3, 7]	   [5, 8]	  	[2, 4]   [1, 6]
	   [3] [7]     [8] [5]	   [4] [2]   [6] [1]
*/