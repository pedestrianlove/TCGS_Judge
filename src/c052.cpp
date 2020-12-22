#include <iostream>

using namespace std;

int min (int x, int y) {
	if (x < y) 
		return x;
	return y;
}


int main ()
{
	// variables
	char input;
	int * char_sum = new int[26];
	for (int i = 0; i < 26; i++)
		char_sum[i] = 0;
	
	// input
	while (cin >> input) {
		char_sum[input - 'A'] ++;
	}

	// compute
	int H = char_sum['H' - 'A'];
	int A = char_sum['A' - 'A'];
	int P = char_sum['P' - 'A'] / 2;
	int Y = char_sum['Y' - 'A'];

	// output
	cout << min (H, min (A, min (P, Y))) << endl;



	// free
	delete (char_sum);

}
