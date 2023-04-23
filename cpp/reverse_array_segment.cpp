#include <iostream>
using namespace std

// მოცემულია N წევრიანი მასივი. შემოსულ მასივში შემოაბრუნეთ სეგმენტი [a, b]. იხილეთ ნიმუშები.
/* example
------------- input ------------
10
1 2 3 4 5 6 7 8 9 10
2 5
-------------- answer -----------
1 5 4 3 2 6 7 8 9 10
*/

// მასივის სეგმენტის შემობრუნება
int* reverse_segment(int arr[], int a, int b) {
	// a იმატებს, b იკლებს.
	// თუ ერთმანეთს გაუთანაბრდებიან ან a>b-ზე, ეს ნიშნავს, რომ მასივის სეგმენტი შებრუნებულია უკვე და საჭიროა ამ მასივის დაბრუნება
	if(a>=b) return arr;
	int savedNum = arr[a]; // გადასანაცვლებლის პირველი რიცხვი
	arr[a] = arr[b];
	arr[b] = savedNum;
	return reverse_segment(arr, a+1, b-1);
}

int main() {
	// მასივის სეგმენტის შემობრუნება
	int n, a, b;
	int arr[n];
	cout << "Array length: ";
	cin >> n;
	for(int i=0; i<n; i++) {
		cout << "number: ";
		cin >> arr[i];
	}
	cout << "segments:\n";
	cin >> a >> b;
	
	// cout << reverse_segment(arr, a, b)[0];
	int *reversedArr = reverse_segment(arr, a, b);
	// int reversedArr[n] = reverse_segment(arr, a, b);
	// print array
	for(int i; i<n; i++) {
		cout << reversedArr[i] << " ";
	}

	return 0;
}