#include <iostream>

using namespace std;

int main ()
{
	int amount, target;
	int min;
	while (cin >> amount >> target) {
		min = 0;
		while (amount < target) {
			min ++;
			amount = amount * 3;
		}
		cout << min << endl;
	}



}
