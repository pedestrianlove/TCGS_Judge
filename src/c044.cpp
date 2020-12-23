#include <iostream>

using namespace std;

int min (int x, int y) {
	if (x < y)
		return x;
	return y;
}


int main ()
{
	int a1, a2, b1, b2;
	while (cin >> a1 >> a2 >> b1 >> b2) {
		cout << min (a1 + a2, b1 + b2) << endl;
	}

}
