#include <iostream>

using namespace std;

int main ()
{
	int n, sum, diff;
	int * data;
	while (cin >> n) {
		diff = 0;
		sum = 0;
		
		// input
		data = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> data[i];
			sum += data[i];
		}

		// compute mean
		sum = sum / n;

		// compute difference
		for (int i = 0; i < n; i++) {
			if (data[i] >= sum) diff += data[i] - sum;
		}


		// output
		cout << diff << endl;
	}



}
