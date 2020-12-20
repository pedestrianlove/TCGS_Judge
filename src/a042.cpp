#include <iostream>

using namespace std;

int main ()
{
	int num, sum;
	while (cin >> num) {
		sum = 1;
		while (num > 0) {
			if (num > 1) {
				sum = (sum * 169) % 100;
				num -= 2;
			}
			sum = (sum * 13) % 100;
			num --;

		}
		sum = (sum % 100 - sum % 10) / 10;
		cout << sum << endl;
	}


}
