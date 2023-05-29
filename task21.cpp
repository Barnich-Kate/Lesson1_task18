#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int x1, y1, x2, y2, x3, y3, a, b, c, p, s, P;
	cout << "Type value of x1";
	cin >> x1;
	cout << "Type value of y1";
	cin >> y1;
	cout << "Type value of x2";
	cin >> x2;
	cout << "Type value of y2";
	cin >> y2;
	cout << "Type value of x3";
	cin >> x3;
	cout << "Type value of y3";
	cin >> y3;
	a = sqrt(pow(x2-x1, 2) +pow(y2-y1, 2));
	b = sqrt(pow(x3-x1, 2) +pow(y3-y1, 2));
	c = sqrt(pow(x3-x2, 2) +pow(y3-y2, 2));
	p = (a+b+c)/2;
	P = a+b+c;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "The perimetr is equal:" << P << endl;
	cout << "The square is equal:" << s;
	return 0;
}
