#include <iostream>
using namespace std;
#include <random>
#include <bits/stdc++.h>

// C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.31.31103\include

void selection_sort() {
	int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        arr[i] = rand()%201-100;
        cout << arr[i] << " ";
    }
    cout << "\n";
    
 	int index;
    for(int j=0; j<n; j++){
        index = j;
        for(int i=j+1; i<n; i++) {
            if(arr[i] < arr[index]) {
                index = i;
            }
        }
        if(j!=index){
            arr[j] = arr[j] ^ arr[index];
            arr[index] = arr[j] ^ arr[index];
            arr[j] = arr[j] ^ arr[index];
        }
    }
     
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void bubble_sort() {
	int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        arr[i] = rand()%201-100;
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    for(int j=0; j<n; j++){
        for(int i=0; i<n-1-j; i++){
            if(arr[i]<arr[i+1]){
                arr[i] = arr[i] ^ arr[i+1];
                arr[i+1] = arr[i] ^ arr[i+1];
                arr[i] = arr[i] ^ arr[i+1];
            }
        }
    }
             
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nsorted";

}

void merge_sort() {
	int n;
    cin >> n;
    int arr[n];
    // see my python code for it
}

int main() {
    // bubble_sort();

    int n, num;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
      arr[i] = rand()%201-100;
      cout << arr[i] << " ";
    }
    cout << "\n";

    cin >> num;

    int a=0, b=n, c;

    while(a<b-1){
      c = (a+b)/2;
      // [a,c][c,b];
      if(arr[c]>num) b=c;
      else if(arr[c]<num) a=c;
      else {a=b=c; break;}        
    }

    if(arr[a]==num || arr[b]==num || arr[c]==num) cout << "YES";
    else cout << "NO";

}