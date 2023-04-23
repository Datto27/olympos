#include <iostream>
using namespace std;

void Tower_of_Hanoi(int, int, int);
void Tower_of_Hanoi2(int, int, int);


int main() {
    int n;
    cin >> n;
    // Tower_of_Hanoi(n, 1, 2);  // ირველიდან მესამე ღეროზე გადატანა 
    // Tower_of_Hanoi2(n, 1, 3);

    // ჰანოეს კოშკის გამოთვლის დრო 64-ი დისკისთვის
    // 1<<n - 2^n
    if(n==64) cout << ((1ULL<<63)-1+(1ULL<<63));
    else cout << (1ULL<<n);      
}

// 1+2+3=6
void Tower_of_Hanoi(int n, int a, int b){
	// n - diskebis raodenoba
    if(n==1){
        cout << a << " " << b << "\n";
        return;
    }
    Tower_of_Hanoi(n-1, a, 6-(a+b));
    cout << a << " " << b << "\n";
    Tower_of_Hanoi(n-1, 6-(a+b), b);
}

// Repair in Hanoi
void Tower_of_Hanoi2(int n, int a, int b) {
   	if(n==1){
        cout << n << " " << a << " " << 6-(a+b) << "\n";
        cout << n << " " << 6-(a+b) << " " << b << "\n";
        return;
    }
    Tower_of_Hanoi(n-1, a, b);        
    cout << n << " " << a << " " << 6-(a+b) << "\n";
    Tower_of_Hanoi(n-1, b, a);            
    cout << n << " " << 6-(a+b) << " " << b << "\n";    
    Tower_of_Hanoi(n-1, a, b);  
}
