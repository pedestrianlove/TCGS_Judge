#include <iostream>

using namespace std;

int main ()
{
	int num, sum;
	while (cin >> num) {
		sum = 0;
		while (num >= 5) {
			sum += num / 5;
			num = num / 5 + (num % 5);
		}
		sum += num;
		cout << sum << endl;
	}


}
