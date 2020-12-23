#include <iostream>

using namespace std;

int gcd (int x, int y) {
	if (x < y) return gcd (y, x);
	if (y == 0) return x;
		
	cout << x << '%' << y << '=' << x % y << endl;
	return gcd (y, x % y);
}



int main ()
{
	int a, b;
	while (cin >> a >> b) {
		printf ("GCD(%d,%d)=%d\n", a, b, gcd (a, b));
	}



}
