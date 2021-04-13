#include <iostream>

using namespace std;

void hanoi (int n, int a, int b, int c) {
	if (n != 0) {
		hanoi (n-1, a, c, b);
		cout << "Ring " << n <<  " from " << a << " to " << c << endl;
		hanoi (n-1, b, a, c);
	}
}



int main ()
{
	int n;

	while (cin >> n) {
		hanoi (n, 1, 2, 3);
	}


}
