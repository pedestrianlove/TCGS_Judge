#include <iostream>

using namespace std;

int max (int x, int y) {
	if (x > y)
		return x;
	return y;
}


int main ()
{
	int a, b;
	while (cin >> a >> b) {
		if (a + b >= 120)
			cout << 2 << endl;
		else if (max (a, b) >= 60)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}



}
