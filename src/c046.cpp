#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void int_part (int a, int b) {
	cout <<  a / b ;
}

void float_part (int a, int b, int n) {
	cout << '.';
	a = a % b;
	while (n >= 1) {
		a *= 10;
		cout << a / b;
		a = a % b;
		n --;
	}
}


int main ()
{
	int a, b, n;
	while (cin >> a >> b >> n) {
		int_part (a, b);
		float_part (a, b, n);
		cout << endl;
	}


}
