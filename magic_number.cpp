#include <iostream>
using namespace std;
#include <tgmath.h>

// რომელიც ექვსნიშნაა და
// მისი ციფრთა ჯამი N-ის ტოლია. იპოვეთ მაგიური რიცხვი რომლის ციფრთა ჯამი N-ის ტოლია
// example: 3 --> 300000; 13 --> 940000

int magic_number(int n, int num=0, int count=5){ // (შეტანილი_რიცხვი, დასაბურნებელი_რიცხვი, ნულების რაოდენობა/ხარისხი)
	// cout << n << " " << num << " " << count << "\n";
	if(n<=9){
		num = num + n * pow(10, count);
		count = count -1;
		return num;
	}
	else{
		num = num + 9* pow(10, count);
		count = count -1;
		n = n - 9;
	}
	return magic_number(n, num, count);
}

int main() {
	//მაგიური რიცხვი
	int n;
	cin >> n;
	cout << magic_number(n);
	return 0;
}