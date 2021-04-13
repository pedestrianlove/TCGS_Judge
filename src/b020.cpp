#include <iostream>
#include <algorithm>

using namespace std;

bool cmp (string a, string b) {
	return a < b;
}


int main ()
{
	int n;
	string* data;
	while (cin >> n) {
		data = new string[n];
		
		for (int i = 0;i < n;i++) cin >> data[i];
		
		// sort
		//sort (data, data + n, cmp);
		sort (data, data + n);


		// output
		for (int i = 0;i < n; i++)
			cout << data[i] << endl;

		delete[] (data);
	}



}
