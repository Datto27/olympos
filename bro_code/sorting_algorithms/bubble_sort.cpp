#include <iostream>

// space complexity - O(1)
// best case - O(n*logn); 
// worst case - O(n^2);

// (j, j+1) - შესადარებელი ინდექსები
// exmp: [1, 9, 8, 2](0,1) --> [1, 9, 8, 2](1,2) --> [1, 8, 9, 2](2,3) --> [1, 8, 2, 9]
// --> [1, 8, 2, 9](0,1) --> [1, 8, 2, 9](1,2) --> [1, 2, 8, 9] .....


int* bubble_sort(int array[], int arrSize){
	// ეს ალგორითმი მთელს მასივს გაუვლის arrSize-1ჯერ
	for(int i=0; i<arrSize-1; i++) {
		std::cout << "\n" << array[i] << "\n";
		for(int j=0; j<arrSize-i-1; j++) {
			// მასივის ყოველ გავლაზე მისი სიგრძე მცირდება 1ით
			std::cout << array[j] << "-" << array[j+1] << "\t";
			// იმ შემთხვევაში j+1 ლემენტი მეტია j ელემენტზე გაუცვლიან ადგილებს
			// ამ გაცვლების შედეგად პირველ გავლაზე უდიდესი აითემი გადაინაცვლებს ბოლოში
			// და შესაძლებელი გახდება რომ სორტირების არეალი შევამციროთ ერთით arrSize-i-1
			if(array[j] > array[j+1]) {
				// ადგილების შეცვლა
				int temp = array[j]; 
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	return 0;
}


int main(){
	int arr[9] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
	int arrSize = sizeof(arr)/sizeof(int); // array length
	// std::cout << arrSize;

	bubble_sort(arr, arrSize);

	for(int i=0; i<arrSize; i++) {
		std::cout << arr[i];
	}


	return 0;
}
