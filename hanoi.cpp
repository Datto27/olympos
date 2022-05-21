#include <iostream>
using namespace std;

void Tower_of_Hanoi(int, int, int, int);

int main() {
    int n;
    cin >> n;
    Tower_of_Hanoi(n, 1, 2, 3);   
}

void Tower_of_Hanoi(int n, int a1, int a2, int a3) {

    if(n==1){
        cout << a1 << " ღეროდან " << n << " რგოლი გადავიტანოთ " << a3 << " ღეროზე\n";
        return;
    }    
    
    // a1 – (m1,m2,m3,…mn-1) –> a2
    Tower_of_Hanoi(n-1, a1, a3, a2);
    
    // a1 – (mn) –> a3
    cout << a1 << " ღეროდან " << n << " რგოლი გადავიტანოთ " << a3 << " ღეროზე\n";
    
    // a2 – (m1,m2,m3,…mn-1) –> a3
    Tower_of_Hanoi(n-1, a2, a1, a3);

}
