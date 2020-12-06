#include <iostream>

using namespace std;

int main ()
{
	int start, end;
	int sum;
	while (cin >> start >> end) {
		sum = 0;
		for (int i = start; i <= end; i++) {
			cout << i;
			if (i != end) cout << '+';
			else cout << '=';
			sum += i;
		}
		cout << sum << endl;
	}


}
