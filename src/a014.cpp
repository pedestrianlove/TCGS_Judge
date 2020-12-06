#include <iostream>

using namespace std;

int min (int x, int y) {
	if (x < y)
		return x;
	else
		return y;
}

int main ()
{
	int a, b, c;
	while (cin >> a >> b >> c)
		cout << min (a, min (b, c)) << endl;
}
