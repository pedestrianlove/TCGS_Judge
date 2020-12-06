#include <iostream>

using namespace std;

long long int fact (int x) {
	int product = 1;
	while (x > 1) 
		product = product * (x--);
	return product;
}


int main ()
{
	int m, n;
	while (cin >> m >> n) {
		cout << fact (m) / fact (m-n) << endl;
	}

}
