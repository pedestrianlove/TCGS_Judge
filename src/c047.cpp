#include <iostream>

using namespace std;

int main ()
{
	int num, tmp;
	int sum;
	while (cin >> num) {
		sum = 0;
		for (int i = 0; i < num ; i++) {
			cin >> tmp;
			sum += (tmp - 2) * (tmp - 2);
		}
		cout << sum << endl;
	}



}
