#include <iostream>

using namespace std;

int main ()
{
	int num;
	while (cin >> num) {
		if (num % 2 == 0)
			cout << "EVEN" << endl;
		else
			cout << "ODD" << endl;
	}
}
