#include <iostream>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp;
	while (cin >> n) {
		int data[100000000] = {0};
		
		// input
		for (int i = 0;i < n;i ++) {
		       	cin >> tmp;
			data[tmp-1]++;
		}
		

		// process
		int max = 0, max_idx;
		for (int i = 0;i < 100000000; i++) {
			if (max < data[i]) {
				max = data[i];
				max_idx = i;
			}
		}

		// output
		cout << max_idx+1 << " " << max << endl;

	}

}
