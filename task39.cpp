#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, x2, B, x1, C, D;
	cout << "Type value of A";
	cin >> A;
	if (A <= 0) {
		cout << "It is wrong number, type new number not equal 0";
		cin >> A;
	}
	cout << "Type value of B";
	cin >> B;
	cout << "Type value of C";
	cin >> C;
	D = pow(B, 2) - 4*A*C;
	x1 = (-B - sqrt(D)) / (2*A);
	x2 = (-B + sqrt(D)) / (2*A);
	if (x1<x2) {
		cout << "x1 bigger than the x2" << endl;
	} else {
		cout << "x1 smaller than x2";
	}
	return 0;
}
    
