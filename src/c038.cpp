#include <iostream>

using namespace std;

int main ()
{
	int m, d, l;
	while (cin >> m >> d >> l) {
		if (m == 7) {
			if (29 + (31 - d + 1) >= l)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		if (m == 8) {
			if ((29 - d + 1) >= l)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}


}
