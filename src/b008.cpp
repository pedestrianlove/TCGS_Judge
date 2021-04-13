#include <iostream>

using namespace std;

int main ()
{
	string s;int flg;
	while (cin >> s) {
		flg = 1;
		int len = s.length ();
		for (int i = 0;i < len; i++) {
			if (s[i] != s[len-i-1]) {
				cout << "NO" << endl;
				flg = 0;
				break;
			}
		}
		if (flg == 1) cout << "YES" << endl;
	}


}
