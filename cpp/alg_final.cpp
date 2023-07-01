#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int maxIndex(vector<int> arr);
void workingWithFiles();
void printVector(vector<int> x);
void swap(int* x, int* y);
bool isLetter(char s);
bool isPalindrom(string text);
int BinarySearch(vector<int> arr, int num);
void fillVector(vector<int>* arr, int size, int min, int max);
void rainyLand();

int main() {
    // vector<int> arr;
    // // fill vector
    // for(int i=0; i<30; i++) {
    //     arr.push_back(rand() % 10 + 1);
    // }
    // cout << maxIndex(arr);
    
    // workingWithFiles();
    
    // // wap numbers
    // int a, b;
    // cout << "Enter two numbers: " << endl;
    // cin >> a >> b;
    // cout << "Before: " << a << " " << b << endl;
    // swap(&a, &b);
    // cout << "After: " << a << " " << b << endl;
    
    
    // cout << isLetter('s');
    
    
    // // if word isPalindrom
    // string txt;
    // cin >> txt;
    // cout << isPalindrom(txt) << endl;
    
    
    // // binary search
    // int num;
    // vector<int> nums;
    // ifstream numsf("sorted_numbers.txt");
    // while(numsf >> num) {
    //     nums.push_back(num);
    // }
    // printVector(nums);
    // cout << "Enter target: " << endl;
    // cin >> num;
    // cout << "Result: " << BinarySearch(nums, num);
    
    
    // // 10.3 generate random vector
    // vector<int> nums;
    // fillVector(&nums, 150, 100, 200);
    // // print vector with 7 column
    // for(int i=0; i<150; i++) {
    //     cout << nums[i] << " ";
    //     if(i % 7 == 0) cout << endl;
    // }

    
    // // 13.1
    // rainyLand();
    
    
    // c++ sort
    int x, y;
    vector<int> W;
    double c;
    ifstream inFile1("sorted_numbers.txt");
    ifstream inFile2("sorted.txt");
    while( inFile1 >> x, inFile2 >> y ) {
        c = x*y; 
        W.push_back(c);
    }
    cout << "ფორმირებული ვექტორის სიგრძე" ;
    cout << W.size() << endl;
    sort(W.rbegin(), W.rend());
    
    printVector(W);
    
    
    return 0;
}


int maxIndex(vector<int> arr) {
    int max = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 3 == 0 & arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void workingWithFiles() {
    // string masivi[4] = { "kato", "nini", "taso", "bakuri" };
    // ofstream file_in("test.txt");
    
    // for(int i=0; i<sizeof(masivi) / sizeof(string); i++) {
    //     file_in << masivi[i] << " ";
    // }
    
    // file_in.close();
    
    
    // // copy/paste
    // int num;
    // ifstream file1("sorted_numbers.txt");
    // ofstream file2("sorted.txt");
    
    // while(file1 >> num) {
    //     file2 << num << "\n";
    // }
    
    // file1.close();
    // file2.close();
    
    // 3.4
    int num;
    vector<int> arr;
    ifstream sortedf("sorted.txt");
    
    while(sortedf >> num) {
        arr.push_back(num);
    }
    
    cout << "Numbers: " << endl;
    printVector(arr);
    
    cout << "Insert number: " << endl;
    cin >> num;
    
    if(num > arr[arr.size() - 1]) {
        arr.push_back(num);
    } else {
        int i = 0;
        while(true) {
            if(arr[i] >= num) {
                arr.insert(arr.begin() + i, num);
                break;
            }
            i++;
        }
    }
    
    cout << "Numbers: " << endl;
    printVector(arr);
}

void swap(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
}

bool isLetter(char s) {
    if(s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z') {
        return true;
    }
    return false;
}

bool isPalindrom(string text) {
    int i, len;
    len = text.size();
    for(i=0; i<len; i++) {
        if(text[i] != text[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int BinarySearch(vector<int> arr, int target) {
    int left=0, right=arr.size()-1, middle;
    while(left <= right) {
        middle = (left + right) / 2;
        // cout << "middle: " << middle << endl;
        if(target == arr[middle]) {
            return middle;
        }
        if(target > arr[middle]) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    
    return -1;
}

void fillVector(vector<int>* arr, int size, int min=0, int max=100) {
    srand(time(0));
    
    for(int i=0; i<size; i++) {
        (*arr).push_back(rand() % min + (max + 1 - min));
    }
}

void rainyLand() {
    // მონაცემების ფაილი წარმოადგენს M× N მართკუთხა ფორმის ნაკვეთის გეგმას წვიმის შემდეგ, სადაც სიმბოლო '+'-ით აღნიშნულია მშრალი ნაწილები, გუბეები კი – სიმბოლო '-'-ით. დაწერეთ ფუნქცია, რომელიც წაიკითხავს ინფორმაციას ფაილიდან,  ჩაწერს მას სიმბოლური ტიპის ორგანზომილებიანი ვექტორის სახით და შემდეგ 
    // დაითვლის და დააბრუნებს გუბეების რაოდენობას ნაკვეთზე.
    /* nakveti
    + - + - -
    + + + - -
    - + + + -
    - - - + +
    */
    int puddles = 0;
    char row;
    vector<vector<char>> land;
    ifstream landf("nakveti.txt");
    
    while(landf >> row) {
        vector<char> section;
        cout << row << endl;
        if(row == '-') {
            puddles += 1;
        }
        // for(int i=0; i<row.size(); i++) {
        //     // section.push_back(row);
        // }
    }
    
    cout << puddles << endl;
}

void printVector(vector<int> x){
 for(int i=0; i<x.size(); i++)
 cout << x[i] << ' ';
 cout << endl;
}
