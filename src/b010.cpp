#include <iostream>

using namespace std;

int main ()
{
	string s;
	while (cin >> s) {
		int len = s.length ();
		for (int i = 0;i < len; i++) {
			cout << (char)(((s[i]-'A'+24)%26) + 'A');
		}
		cout << endl;
	}


}
