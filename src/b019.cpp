#include <iostream>
#include <algorithm>

using namespace std;

bool cmp (int a, int b) {
	return a > b;
}


int main ()
{
	int n;
	int* data;
	while (cin >> n) {
		data = new int[n];

		// input
		for (int i = 0;i < n;i ++) {
			cin >> data[i];
		}

		// sort
		sort (data, data + n, cmp);

		// output
		for (int i = 0;i < n; i++) {
			cout << data[i] << " ";
		}
		cout << endl;


		delete[] (data);
	}



}
