#include <iostream>

using namespace std;

int main ()
{
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) break;
		if (a > b)
			cout << "A " << a - b << endl;
		else if (a < b)
			cout << "B " << b - a << endl;
		else
			cout << 0 << endl;

	}



}



