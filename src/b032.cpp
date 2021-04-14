#include <iostream>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie (false);

	int n;
	int* data;
	while (cin >> n) {
		data = new int[n];
		
		// input
		for (int i = 0;i < n; i++) cin >> data[i];
		
		// process
		int counter = 0;
		int streak = 0;
		for (int i = 0;i < n; i++) {
			if (data[counter] > data[i])
				counter = i;
		}
		for (; counter < n; counter++) {
			if (data[counter < ])
		}



		delete[] (data);
	}


}
