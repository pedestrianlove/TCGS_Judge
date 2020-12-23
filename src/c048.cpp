#include <iostream>

using namespace std;

int min (int x, int y) {
	if (x < y) 
		return x;
	return y;
}

void reset (int * data) {
	data[0] = 0;
	data[1] = 0;
	data[2] = 0;
}

int main ()
{
	// variables
	char input;
	int * char_sum = new int[3];
	reset (char_sum);
	
	// input
	int x_count = 0;
	while (cin >> input) {
		if (input == 'X') {
			if (char_sum[0] >= 3 && 
					char_sum[1] >= 2 && char_sum[2] >= 1)
				x_count ++;
			reset (char_sum);
		}
		else
			char_sum[input - 'A'] ++;
	}


	// output
	cout << x_count << endl;



	// free
	delete (char_sum);

}
