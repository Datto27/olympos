#include <iostream>
using namespace std;

// მოცემული გაქვთ კოორდინატი, თქვენი დავალებაა დაადგინოთ ჭადრაკის დაფაზე ამ კოორდინატის
// შესაბამისი უჯრის ფერი.

int main() {
	// ჭადრაკის დაფა
	char x;
	int y;
	cout << "Enter coordinates:\n";
	cin >> x >> y;

	// cout << (int)x << " ";
	x = (int)x; // char to int

	// ორივეს მნიშვნელობა თუ ლუწია ან კენტია იქნება შავი
 	if(x%2==0 && y%2==0 || x%2!=0 && y%2!=0) cout << "BLACK";
 	else cout << "WHITE";

 	return 0
}
