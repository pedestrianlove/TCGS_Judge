#include <iostream>

using namespace std;

int gcd (int a, int b) {
	if (a == b) return a;
	if (a == 0) return b;
	if (b == 0) return a;
	if (a < b)
		return gcd (b, a);
	return gcd (b, a % b);
}




int main ()
{
	int a, b;
	while (cin >> a >> b)
		cout << gcd (a, b) << endl;


}
