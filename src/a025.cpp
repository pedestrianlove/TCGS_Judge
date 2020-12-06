#include <iostream>

using namespace std;


int main ()
{
	int num;
	while (cin >> num) {
		while (num % 10 == 0)
			num = num / 10;
		while (num != 0) {
			cout << num % 10;
			num = num / 10;
		}
		cout << endl;
	}


}
