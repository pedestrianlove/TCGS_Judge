#include <iostream>
#include <cmath>

using namespace std;


int main ()
{
	int num, sum, bk, factor;
	while (cin >> num) {
		bk = num;
		sum = 0;
		factor = 1;
		while (factor < sqrt (num)) {
			if (num % factor == 0) {
				sum += factor++;
			}
		}
		if (sum > bk)
			cout << "Abundant" << endl;
		else if (sum == bk)
			cout << "Perfect" << endl;
		else
			cout << "Deficient" << endl;
	}


}
