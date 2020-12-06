#include <iostream>

using namespace std;

int main ()
{
	int man;
	int group, single;
	while (cin >> man) {
		group = man / 11;
		single = man % 11;
		cout << group * 1000 + single * 100 << endl;
	}



}
