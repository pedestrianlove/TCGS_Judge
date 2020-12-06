#include <iostream>

using namespace std;

int main ()
{
	int num;
	while (cin >> num) {
		while (num % 2 == 0)
			num = num / 2;
		cout << num << endl;
	}



}
