#include <iostream>

using namespace std;

int main ()
{
	int num;
	while (cin >> num) {
		while (num > -1) 
			cout << num-- << " ";
		cout << endl;
	}
}
