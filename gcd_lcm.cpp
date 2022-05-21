#include <iostream>
using namespace std;


int gcd(int a, int b){   
	// უდიდესი საერთო გამყოფი, უსგ
	// a, b, უარყოფითის შემთხვევაში გავადადებითოთ
    a = a<0?-a:a;
    b = b<0?-b:b;
    while(a&&b){
        if(a>b) a%=b;
        else b%=a;
    }
    return a+b;
}

int lcm(int a, int b) {
	// უმცირესი საერთო ჯერადი, უსჯ
	a = a<0?-a:a;
    b = b<0?-b:b;
	return (a*b) / gcd(a, b);
}

void sum_of_gcd() { // Sum Of GCD
	// Given n positive integers, you have to find the summation of GCD (greatest common divisor) of every possible pair of these integers.
	/* input example
	3
	4(numbers amount in each array) 10 20 30 40
	3() 7 5 12
	3() 125 15 25
	*/
	/* output example
	70
	3
	35
	*/
	int n, m, g;
    cin>>n;
    while(n--){
    	// n-ჯერ დატრიალდება ციკლი, სადაც შეგვყავს m რაოდენობით ლისთს
        cin >> m;
        int a[m];
        // შეგვყავს თითოეული რიცხვი მასივში
        for(int i=0; i<m; i++) cin >> a[i];
        g = 0; // უსგ-ს ჯამის დასათვლელად
        for(int i=0; i<m; i++){
            for(int j=i+1; j<m; j++){
                g += gcd(a[i],a[j]);
            }
        }
        cout << g << "\n";
    }
    return;
}

void circle_of_choirs() { // Circle of choirs
	// Given n and m, help him to determine whether or not all the choir participants will take part in the warm-up again.
	int a, b;
	while(cin>>a>>b) {  // რა რაოდენობითაც გვინდა ისე შევიტანთ
		if(gcd(a,b)==1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
// function 9
int func9(int m, int n) {
	// Write a program that finds the value of the function
	// f(m-n, n), m>n | n,m = n | f(n-m,m), n>m
	if(m>n) {
		return n;
	} else if(m<n) {
		return m;
	} else {
		return m;
	}
}

// The Segment
int segments() {
	// The segment's end points have integer coordinates. Find the number of points on a segment with integer coordinates.
	/* Input example #1
	0 0 3 3
	Output example #1
	4 */
	int coords[4]; // [x1, y1, x2, y2]
	// კორდინატების შეყვანა
	for(int i=0; i<4; i++) {
		int n;
		cin >> n;
		coords[i] = n;
	}
	// კორდინატებით შექმნილი მართკუთხედის სიგრძე / სიგანე
	int x = coords[2]-coords[0]; // სიგანე
	int y = coords[3]-coords[1]; // სიმაღლე
	// თუ კვადრატია
	if(x==y) {
		return x+1;
	}
	// მართკუთხედის შემთხვევაში
	// x = 
	int icc = 0;
	int a, b;
	x > y ? a=x, b=y : a=y, b=x;
	// ?????????? არაა დასრულებული

	return 0;
}

int main() {
	// int a, b;
	// cin >> a >> b;
	// cout << gcd(a, b) << "\n" << lcm(a, b);

	// sum_of_gcd(); // SUM OF GCD

	// circle_of_choirs();

	cout << segments();

	return 0;
}

