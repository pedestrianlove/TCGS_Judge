#include <iostream>

using namespace std;

int main ()
{
	int num, terms;
	while (cin >> num) {
		terms = 1;
		while (num != 1) {
			if (num % 2 == 1)
				num = num * 3 + 1;
			else
				num = num / 2;
			terms++;
		}
		cout << terms << endl;
	}



}
