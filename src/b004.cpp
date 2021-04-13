#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	int* data; int tmp;
	while (cin >> n >> m) {
		data = new int[n];
		for (int i = 0;i < n; i++) data[i] = 0;

		// input
		for (int i = 1; i <= m; i++) {
			cin >> tmp;
			data[tmp-1] = tmp;
		}

		// output
		for (int i = 0;i < n; i++) {
			if (data[i] == 0) cout << i+1 << " ";
		}
		cout << endl;


		delete[] (data);
	}


}
