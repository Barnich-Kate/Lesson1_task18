#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	double a1, a2;
	const double Pi = 3.14;
	cout << "Type corner in radianakh: ";
	cin >> a1;
	a2 = a1*180/Pi;
	cout << "The value of angle is equal:" <<a2;
	return 0;
}
