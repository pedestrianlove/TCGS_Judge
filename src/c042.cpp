#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int data [5001];
	int turn_count = 0;

	// input and analysis data
	char tmp;
	int counter = 0;
	while (cin >> tmp) {
		if (tmp == 'F')
			counter ++;
		if (tmp == 'f') {
			data[turn_count ++] = counter;
			counter = 0;
		}
	}
	data[turn_count ++] = counter;

	// sort
	sort (data, data + turn_count);

	// output
	cout << data[turn_count - 1] << endl;
}
