#include <iostream>
using namespace std;

void Tower_of_Hanoi(int, int, int, int, string);

int main() {
    int n;
    cin >> n;
    // პირველი ღეროდან მეორე ღეროზე გადატანა 
    Tower_of_Hanoi(n, 1, 2, 3, "rec default\n");   
}

void Tower_of_Hanoi(int n, int from_rod, int to_rod, int aux_rod, string recN) {
    // n - number of disks
    // from_rod - row where disk is present
    // to_rod - rod where the disk is to be moved
    // aux_rod - auxilary rod, the remaining one
    // recN - recursion number, to show which recursion is running each time

    // cout << recN;

    if(n==1){
        cout << from_rod << " ღეროდან " << n << " რგოლი გადავიტანოთ " << to_rod << " ღეროზე\n";
        return;
    }    
    
    // a1 – (m1,m2,m3,…mn-1) –> a2
    Tower_of_Hanoi(n-1, from_rod, aux_rod, to_rod, "rec 1\n");
    
    // a1 – (mn) –> a3
    cout << from_rod << " ღეროდან " << n << " რგოლი გადავიტანოთ " << to_rod << " ღეროზე\n";
    
    // a2 – (m1,m2,m3,…mn-1) –> a3
    Tower_of_Hanoi(n-1, aux_rod, to_rod, from_rod, "rec 2\n");

}

// https://www.youtube.com/watch?v=YstLjLCGmgg